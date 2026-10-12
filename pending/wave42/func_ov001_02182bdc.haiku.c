#include "ffc/types.h"

extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, const void *d, uint32_t e);
extern void func_ov001_021832d4(uint32_t x);
extern void func_ov001_02182b00(void *x);
extern uint32_t func_ov000_0216591c(void);
extern uint8_t data_ov001_02191bd4[];
extern uint8_t data_ov001_02191c0c[];

typedef void (*xfn_t)(uint32_t, uint32_t, uint8_t *, uint32_t);

void func_ov001_02182bdc(void *self, uint32_t a, uint32_t b, const uint8_t *src)
{
    uint32_t *w = (uint32_t *)self;
    uint8_t *dst;
    uint32_t i;

    w[0x11] = a;
    w[0x12] = b;
    if (src != 0) {
        dst = (uint8_t *)self + 0x4c;
        for (i = 8; i != 0; i--) {
            *dst++ = *src++;
        }
    }

    if (a - 1 <= 1) {
        func_ov000_021652a8(7, 3, 8, data_ov001_02191bd4, w[1]);
        w[7] = 5;
        ((xfn_t)w[4])(w[0x11], w[0x12], (uint8_t *)self + 0x4c, w[5]);
        func_ov001_021832d4(w[1]);
    } else {
        func_ov000_021652a8(7, 3, 8, data_ov001_02191c0c, w[1]);
        func_ov001_02182b00(self);
        w[7] = 7;
        w[0xe] = func_ov000_0216591c() + 500;
        w[0xc] = 0;
        w[0xd] = 4;
        ((xfn_t)w[4])(w[0x11], w[0x12], (uint8_t *)self + 0x4c, w[5]);
    }
}
