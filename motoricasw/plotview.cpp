#include "plotview.h"
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QChart>
#include <QLineSeries>
#include <QValueAxis>
#include <QSplineSeries>
#include <QDebug>

PlotView::PlotView(QWidget* parent, int xTicks, int yTicks, int updateFreq) :
    QGraphicsView(new QGraphicsScene, parent), updateFrequency(updateFreq)
{
    setDragMode(QGraphicsView::NoDrag);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //setRenderHint(QPainter::Antialiasing);
    setMouseTracking(true);

    m_chart = new QChart;
    m_chart->setMargins(QMargins(0, 0, 0, 0));

    forceData = new QLineSeries;
    currentData = new QLineSeries;

    forceData->setName("Усилие");
    forceData->setUseOpenGL();
    m_chart->addSeries(forceData);

    currentData->setName("Ток");
    currentData->setUseOpenGL();
    m_chart->addSeries(currentData);

    axisTime = new QValueAxis;
    axisTime->setTickCount(xTicks);
    axisTime->setLabelFormat("+%.0f");
    axisTime->setReverse();
    m_chart->addAxis(axisTime, Qt::AlignBottom);

    axisForce = new QValueAxis;
    axisForce->setTickCount(yTicks);
    axisForce->setLabelFormat("%.0f");
    axisForce->setLinePen(QPen(QBrush(Qt::BrushStyle::SolidPattern), 2));
    axisForce->setLinePenColor(forceData->pen().color());
    m_chart->addAxis(axisForce, Qt::AlignLeft);

    axisCurrent = new QValueAxis;
    axisCurrent->setTickCount(yTicks);
    axisCurrent->setLabelFormat("%.0f");
    axisCurrent->setLinePen(QPen(QBrush(Qt::BrushStyle::SolidPattern), 2));
    axisCurrent->setLinePenColor(currentData->pen().color());
    m_chart->addAxis(axisCurrent, Qt::AlignRight);

    forceData->attachAxis(axisTime);
    forceData->attachAxis(axisForce);

    currentData->attachAxis(axisTime);
    currentData->attachAxis(axisCurrent);

    m_chart->setAcceptHoverEvents(true);
    scene()->addItem(m_chart);

    axisForce->setRange(0, 10);
    axisCurrent->setRange(0, 10);
    axisTime->setRange(0, 60);
}

void PlotView::addValues(float force, float current)
{
    qreal maxV = 10, maxI = 10;

    for (int i = 0; i < forceData->pointsVector().size(); i++)
    {
        qreal V = forceData->pointsVector()[i].y();
        qreal I = currentData->pointsVector()[i].y();
        qreal t = forceData->pointsVector()[i].x();

        if ((maxV < V) && (V > 10))
            maxV = V;
        if ((maxI < I) && (I > 10))
            maxI = I;
        forceData->replace(i, t + 1.0f / (qreal)updateFrequency, V);
        currentData->replace(i, t + 1.0f / (qreal)updateFrequency, I);
    }

    forceData->append(0, force);
    currentData->append(0, current);

    if (forceData->pointsVector().size() > 60 * updateFrequency + 1)
    {
        forceData->remove(0);
        currentData->remove(0);
    }

    axisForce->setRange(0, maxV);
    axisCurrent->setRange(0, maxI);
}

void PlotView::mouseMoveEvent(QMouseEvent *event)
{
    QGraphicsView::mouseMoveEvent(event);
}

void PlotView::resizeEvent(QResizeEvent *event)
{
    if (scene())
    {
        scene()->setSceneRect(QRect(QPoint(0, 0), event->size()));
        m_chart->resize(event->size());
    }
    QGraphicsView::resizeEvent(event);
}
