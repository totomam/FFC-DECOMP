#include "ffc/types.h"

extern void func_02056c9c(void *self, int x);
extern uint32_t data_ov009_021afcd4[];
extern uint32_t data_020ae644[];
extern uint32_t data_020ae654[];

typedef struct {
    uint32_t a;
    uint32_t b;
} P;

void func_ov009_0219d218(uint8_t *self, uint32_t a1, P p, uint8_t *src, uint8_t a6)
{
    uint32_t *w = (uint32_t *)self;
    uint32_t *s = (uint32_t *)src;
    uint32_t *q;
    uint16_t *ps;
    uint16_t *pd;
    int i;

    func_02056c9c(self, 0);
    w[0] = (uint32_t)data_ov009_021afcd4;
    w[0x84 / 4] = a1;
    w[0x88 / 4] = p.a;
    w[0x8c / 4] = p.b;

    q = (uint32_t *)(self + 0x90);
    q[0] = s[0];
    q[1] = (uint32_t)data_020ae644;
    q[2] = s[2];
    q[3] = (uint32_t)data_020ae644;
    q[4] = s[4];
    q[5] = (uint32_t)data_020ae644;
    q[6] = s[6];
    q[7] = (uint32_t)data_020ae644;
    q[8] = s[8];
    q[9] = (uint32_t)data_020ae644;
    q[10] = s[10];
    q[9] = (uint32_t)data_020ae654;
    q[11] = s[11];

    ps = (uint16_t *)(src + 0x30);
    pd = (uint16_t *)(q + 12);
    for (i = 0x11; i != 0; i--) {
        *pd++ = *ps++;
    }

    q[0x54 / 4] = s[0x54 / 4];
    q[0x58 / 4] = s[0x58 / 4];
    q[0x5c / 4] = s[0x5c / 4];
    self[0xf0] = a6;
}
