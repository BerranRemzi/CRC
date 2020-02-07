#include "CRC8_Fast.h"

static uint8_t CRC7Poly = 0;
static uint8_t CRCTable[256];

uint8_t GetCRCForByte(uint8_t _value)
{
    for (uint8_t j = 0; j < 8; j++)
    {
        if (_value & (uint8_t)0x01) {
            _value ^= CRC7Poly;
        }
        _value >>= 1;
    }

    return _value;
}

void CRC8_Init(uint8_t _CRC7Poly) {
    
    CRC7Poly = _CRC7Poly;

    // fill an array with CRC values of all 256 possible bytes
    for (uint16_t i = 0; i <= 255; i++)
    {
        CRCTable[i] = GetCRCForByte((uint8_t)i);
    }
}

uint8_t CRC8_Get(uint8_t _message[], uint8_t _length)
{
    uint8_t crc = 0;

    for (uint8_t i = 0; i < _length; i++) {
        crc = CRCTable[crc ^ _message[i]];
    }
    return crc;
}

