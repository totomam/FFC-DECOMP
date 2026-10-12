#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} Blk;

typedef struct {
    uint32_t x, y;
    Blk t;
} Frame;

extern void *func_0205681c(uint32_t size);
extern void func_02055110(uint32_t a, void *b);
extern uint32_t data_020b0fa0[];
extern uint32_t data_0213e098;

void func_0205d04c(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t f)
{
    Frame fr;
    uint32_t *o;
    uint32_t x, y;
    o = (uint32_t *)func_0205681c(0x34);
    if (o) {
        fr.t = *(Blk *)&a;
        x = p[0xf];
        y = p[0x10];
        o[3] &= ~0xffu;
        o[0] = (uint32_t)data_020b0fa0;
        fr.y = y;
        o[5] = p[1];
        o[6] = x;
        o[7] = y;
        o[8] = fr.t.a;
        fr.x = x;
        o[9] = fr.t.b;
        o[10] = fr.t.c;
        o[11] = fr.t.d;
        *(uint16_t *)(o + 12) = (uint16_t)((f << 8) | f);
    }
    func_02055110(data_0213e098, o);
}
