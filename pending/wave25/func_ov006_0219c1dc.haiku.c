#include "ffc/types.h"

extern void func_02088b3c(uint8_t *p);
extern uint64_t func_0209a978(uint32_t a, uint32_t b);

uint32_t func_ov006_0219c1dc(void)
{
    uint8_t buf[8];
    int sum;
    int i;

    func_02088b3c(buf);
    i = 0;
    sum = 0;
    while (i < 6) {
        sum += buf[i];
        i++;
    }
    sum += *(uint32_t *)0x2fffc3c;
    return (uint32_t)(func_0209a978(sum * 7, 0x14) >> 32);
}
