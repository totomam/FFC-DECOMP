#include "ffc/types.h"
extern uint32_t data_020b93b8;
extern int func_0201bff4(uint32_t a, uint32_t b, uint32_t c);
int func_ov003_0216af58(uint16_t *p)
{
    uint32_t i;
    volatile int a = 1;
    int b;
    uint32_t t = p[0];
    if (t != 8 && t != 10) a = 0;
    b = 1;
    if (t != 8 && t != 9) b = 0;
    i = 0;
    if (i < ((uint32_t*)p)[1]) {
        do {
            uint32_t *q = (uint32_t*)((uint8_t*)p + ((uint32_t*)p)[2]);
            uint32_t e = q[i];
            if (b == func_0201bff4(data_020b93b8, e >> 24, e & 0xffffff)) return a;
            i++;
        } while (i < ((uint32_t*)p)[1]);
    }
    return a == 0;
}
