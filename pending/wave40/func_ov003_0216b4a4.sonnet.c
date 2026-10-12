#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_0205681c(uint32_t a);
extern void func_ov003_021640b0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

typedef struct {
    uint16_t type;
    uint16_t pad;
    uint32_t n;
    uint32_t off;
} Hdr;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
} Ent;

void func_ov003_0216b4a4(uint32_t ctx, Hdr *s)
{
    uint32_t off = s->off;
    uint16_t type = s->type;
    Ent *p = (Ent *)((uint8_t *)s + off);
    uint16_t lo = (uint16_t)p->w0;
    uint32_t flag = 0;
    uint16_t hi = (uint16_t)p->w1;
    uint32_t r7;
    uint32_t r6;
    uint32_t r4f;
    uint32_t obj;

    if (type == 1) {
        if (s->n >= 3) {
            flag = 1;
        }
    }
    if (flag) {
        r7 = func_0209a76c(p->w2 << 16, 0x168);
    } else {
        r7 = 0x4000;
    }
    r7 = (uint16_t)r7;
    if (type == 2) {
        r6 = p->w2;
    } else {
        r6 = 0;
    }
    r6 = (uint16_t)r6;
    if (s->n < 4) {
        r4f = 1;
    } else {
        r4f = (p->w3 == 0);
    }
    obj = func_0205681c(0x2c);
    if (obj) {
        func_ov003_021640b0(obj, ctx, lo, hi, r7, r6, r4f);
    }
}
