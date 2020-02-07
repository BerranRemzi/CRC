#ifndef CRC8_SLOW_H
#define CRC8_SLOW_H

#include <stdint.h>

void CRC8_Init(uint8_t _CRC7Poly);

uint8_t CRC8_Get(uint8_t _message[], uint8_t _length);

#endif // !CRC8_SLOW_H
