#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t f;
} Loc;

extern void func_02015e8c(void *p, uint32_t v, uint32_t x, uint32_t y);
extern void *func_02052d90(uint32_t x, uint32_t y);
extern void func_02052d3c(uint32_t x, uint32_t y);
extern void func_02052c04(uint32_t x);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

void func_ov002_0219b0cc(int32_t *out, int32_t neg, int32_t mode, uint32_t r3)
{
    Loc l;
    Loc *p;
    int32_t r4;
    int32_t r7;
    uint8_t *m;

    p = &l;
    func_02015e8c(p, data_020b8e44, mode, r3);
    m = (uint8_t *)func_02052d90(p->b, p->c);
    out[0] = *(int32_t *)(m + 0xec);
    out[1] = *(int32_t *)(m + 0xf0);

    if (p->b != 0) {
        if (p->f != 0) {
            func_02052d3c(p->b, p->c);
        }
        func_02052c04(p->b);
    }
    func_02053290(p);

    switch (mode) {
    case 0:
        r4 = 0;
        r7 = 0;
        break;
    case 1:
        r4 = ~0x40;
        r7 = 0;
        break;
    case 2:
        r4 = ~0x40;
        r7 = 0x5a;
        break;
    }

    if (neg == 1) {
        r4 = -r4;
        out[0] = -out[0];
    }
    out[0] += r4;
    out[1] += r7;
}
