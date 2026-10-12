#include "ffc/types.h"

extern void func_020340d0(void *a, void *b, void *c, uint32_t d, uint32_t e);
extern uint8_t func_02033d44(void *a, void *b, void *c);
extern void func_02033ea4(void *dst, void *a, void *b);
extern void func_02033e8c(void *p);

typedef struct {
    uint32_t w[5];
    uint16_t h[8];
} Blob;

void func_02034030(uint8_t *a, uint8_t *b, uint32_t c, uint32_t d, ...)
{
    Blob t;
    uint32_t *wa;
    uint16_t *ha;

    func_020340d0(a, a + 0x24, b, c, d);
    if (*(uint32_t *)(b + 0x2c) != 0) {
        *(uint8_t *)(a + 0x6c) = func_02033d44(a, b, a + 0x48);
    }
    func_02033ea4(&t, a + 0x24, a + 0x48);
    wa = (uint32_t *)a;
    wa[0] = t.w[0];
    wa[1] = t.w[1];
    wa[2] = t.w[2];
    wa[3] = t.w[3];
    wa[4] = t.w[4];
    ha = (uint16_t *)(a + 0x14);
    ha[0] = t.h[0];
    ha[1] = t.h[1];
    ha[2] = t.h[2];
    ha[3] = t.h[3];
    ha[4] = t.h[4];
    ha[5] = t.h[5];
    ha[6] = t.h[6];
    ha[7] = t.h[7];
    func_02033e8c(&t);
}
