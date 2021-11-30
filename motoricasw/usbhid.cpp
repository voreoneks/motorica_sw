#include "usbhid.h"

USBHID::USBHID()
{

}

bool USBHID::open(uint16_t vid, uint16_t pid, wchar_t* serial, bool nonblocking)
{
    dev = hid_open(vid, pid, serial);
    if (dev)
        hid_set_nonblocking(dev, nonblocking);
    return dev != 0;
}

void USBHID::write(uint8_t reportId, uint8_t *data, uint8_t size)
{
    if (dev)
    {
        usbTxBuffer[0] = reportId;
        memcpy(usbTxBuffer + 1, data, size);
        hid_write(dev, usbTxBuffer, size + 1);
    }
}

void USBHID::sendCmd(uint8_t reportId, uint8_t cmd, uint8_t *arg, uint8_t argSize)
{
    if (dev)
    {
        usbTxBuffer[0] = reportId;
        usbTxBuffer[1] = (uint8_t)cmd;

        if (arg && argSize)
        {
            if (argSize > usbMaxPacketSize - 2)
                argSize = usbMaxPacketSize - 2;
            memcpy(usbTxBuffer + 2, arg, argSize);
        }
        hid_write(dev, usbTxBuffer, argSize + 2);
    }
}
