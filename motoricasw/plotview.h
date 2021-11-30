#ifndef PLOTVIEW_H
#define PLOTVIEW_H

#include <QGraphicsView>
#include <QChartGlobal>

class QGraphicsScene;
class QMouseEvent;
class QResizeEvent;

QT_CHARTS_BEGIN_NAMESPACE
class QChart;
class QLineSeries;
class QValueAxis;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class PlotView : public QGraphicsView
{
public:
    PlotView(QWidget* parent, int xTicks, int yTicks, int updateFreq);
    void addValues(float force, float current);
private:
    void mouseMoveEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    QChart *m_chart;
    QValueAxis *axisTime, *axisForce, *axisCurrent;
    QLineSeries *forceData, *currentData;
    int updateFrequency;
};

#endif // PLOTVIEW_H
