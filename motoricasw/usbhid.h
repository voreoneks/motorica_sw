#ifndef USBHID_H
#define USBHID_H

#include <QObject>
#include "hidapi.h"

constexpr int usbMaxPacketSize = 64;

class USBHID : QObject
{
    Q_OBJECT
public:
    USBHID();
    bool open(uint16_t vid, uint16_t pid, wchar_t* serial = NULL, bool nonblocking = true);
    void write(uint8_t reportId, uint8_t *data, uint8_t size);
    void sendCmd(uint8_t reportId, uint8_t cmd, uint8_t *arg = NULL, uint8_t argSize = 0);
private:
    hid_device* dev;
    uint8_t usbTxBuffer[64];
    uint8_t usbRxBuffer[64];
};

#endif // USBHID_H
