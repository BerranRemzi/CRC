#include "CRC8_Slow.h"

static uint8_t CRC7Poly = 0;

void CRC8_Init(uint8_t _CRC7Poly)
{
    CRC7Poly = _CRC7Poly;
}

uint8_t CRC8_Get(uint8_t _message[], uint8_t _length)
{
    uint8_t crc = 0;

    for (uint8_t i = 0; i < _length; i++)
    {
        crc ^= _message[i];
        for (uint8_t j = 0; j < 8; j++)
        {
            if (crc & 1) {
                crc ^= CRC7Poly;
            }
            crc >>= 1;
        }
    }
    return crc;
}