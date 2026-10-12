#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} func_020643a8_arg;

typedef struct {
    uint8_t p0[0xc];
    uint32_t idx;
    uint32_t val;
    uint8_t p1[0x1c - 0x14];
} func_020643a8_ent;

typedef struct {
    uint8_t p0[0x10];
    uint32_t x10;
    uint32_t x14;
    uint8_t p1[8];
    uint32_t x20;
} func_020643a8_rec;

typedef struct {
    uint8_t p0[0x24];
    uint8_t *base;
    uint32_t n;
    uint8_t p1[0x58 - 0x2c];
    uint32_t a;
    uint32_t b;
    uint8_t *ents;
} func_020643a8_self;

void func_020643a8(func_020643a8_self *p, func_020643a8_arg s)
{
    uint32_t i;
    uint32_t b = s.b;
    uint32_t a = s.a;
    uint32_t n = p->n;
    p->a = a;
    p->b = b;
    if (n != 0) {
        i = 0;
        do {
            func_020643a8_ent *e = (func_020643a8_ent *)(p->ents + i * 0x1c);
            func_020643a8_rec *r = (func_020643a8_rec *)(p->base + e->idx * 0x28);
            uint32_t v = b + e->val;
            r->x10 = a;
            r->x14 = v;
            r->x20 = (r->x20 & 0xc0003fff) | (((0x7fff - v) << 16) >> 2);
            i++;
        } while (i < p->n);
    }
}
