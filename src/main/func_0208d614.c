#include "ffc/types.h"

extern void func_02088b3c(uint8_t *buf);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);

uint16_t func_0208d614(void)
{
    uint8_t buf[8];
    uint16_t sum;
    int i;

    func_02088b3c(buf);
    i = 0;
    sum = 0;
    for (; i < 6; i++) {
        sum = (uint16_t)(sum + buf[i]);
    }
    sum = (uint16_t)(sum + (uint16_t)*(uint32_t *)0x2fffc3c);
    sum = (uint16_t)(sum * 7);
    return (uint16_t)((uint32_t)(func_0209a76c(sum, 20) >> 32) + 200);
}
