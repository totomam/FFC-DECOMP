#include "ffc/types.h"

extern uint32_t data_0213e098;
extern uint32_t func_02055058(uint32_t);
extern void func_02064b44(uint8_t *a, uint32_t b);

void func_02065528(uint8_t *a)
{
    uint32_t *p;
    uint32_t s, q, r1, t;
    if (a[0x2c]) {
        t = func_02055058(data_0213e098);
        p = (uint32_t *)(a + 0x4c);
        *p += *(uint32_t *)(a + 0x50) * t;
        s = *p;
        q = s >> 8;
        r1 = *(uint32_t *)(a + 0x34);
        if (q >= r1) {
            *p = s - (q << 8);
            func_02064b44(a, q - r1);
            *(uint32_t *)(a + 0x48) += q;
            return;
        }
        *p = s - (q << 8);
        *(uint32_t *)(a + 0x34) = r1 - q;
        *(uint32_t *)(a + 0x48) += q;
    }
}
