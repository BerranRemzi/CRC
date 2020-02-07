#ifndef CRC8_FAST_H
#define CRC8_FAST_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

    void CRC8_Init(uint8_t _CRC7Poly);

    uint8_t CRC8_Get(uint8_t _message[], uint8_t _length);

#ifdef __cplusplus
}
#endif

#endif // !CRC8_FAST_H
