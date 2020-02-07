#include <stdio.h>
#include "../../../CRC8_Slow.h"

int main() {
    printf("CRC8_Slow\n");

    CRC8_Init(0x91);

    // create a message array that has one extra byte to hold the CRC:
    uint8_t message[3] = { 0x83, 0x01, 0x00 };

    message[2] = CRC8_Get(message, 2);
    // send this message to console
    for (uint8_t i = 0; i < 3; i++) {
        printf("%02X ", message[i]);
    }

    return 0;
}