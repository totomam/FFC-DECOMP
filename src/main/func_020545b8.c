#include "ffc/types.h"

extern uint32_t func_0208baf4(void);
extern void func_0208bad0(uint32_t x);
extern void func_020543f0(void);

void func_020545b8(uint8_t *p)
{
    int32_t t;
    int32_t r4;
    uint32_t r6;
    uint16_t v = *(uint16_t *)0x2ffffa8;

    t = (int32_t)(v & 0x8000) >> 15;
    if (t) {
        r4 = 1;
    } else {
        r4 = 0;
    }
    r6 = (func_0208baf4() == 1);
    if (!r6 && !r4) {
        func_0208bad0(1);
    }
    if (p[9] == 0) {
        if (r6 && r4) {
            func_0208bad0(0);
        }
        return;
    }
    p[0xa] = 0;
    if (r4) {
        p[0xa] = 1;
        func_020543f0();
    }
}
