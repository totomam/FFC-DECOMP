#include "ffc/types.h"

extern uint8_t data_020b11b4[];
extern uint8_t data_020b11b8[];

typedef struct {
    uint32_t w0;
    uint8_t pad0[0x14];
    uint32_t w18;
    uint32_t w1c;
    uint8_t pad1[8];
} Tab;

typedef struct {
    uint8_t pad0[0x24];
    Tab *tab;
    uint8_t pad1[5];
    uint8_t flag2d;
    uint8_t pad2[0x32];
    uint8_t *ents;
} Self;

void func_02064f94(Self *s, uint32_t i)
{
    uint32_t off;
    uint32_t a;
    uint32_t w;
    uint32_t o;
    uint32_t idx;
    Tab *tb;
    Tab *t;

    off = 0x1cu * i;
    s->ents[off] = 1;
    if (s->flag2d != 0) {
        return;
    }
    a = *(uint32_t *)(s->ents + off + 8);
    tb = s->tab;
    idx = *(uint32_t *)(s->ents + off + 0xc);
    t = &tb[idx];
    t->w0 = (t->w0 & 0xfffffcffu) | ((a & 3u) << 8);
    if (a == 3) {
        w = t->w0;
        o = ((((w >> 30) & 3u) << 2) | ((w << 16) >> 30)) << 3;
        t->w18 = *(uint32_t *)(data_020b11b4 + o) << 1;
        t->w1c = *(uint32_t *)(data_020b11b8 + o) << 1;
    } else {
        w = t->w0;
        o = ((((w >> 30) & 3u) << 2) | ((w << 16) >> 30)) << 3;
        t->w18 = *(uint32_t *)(data_020b11b4 + o);
        t->w1c = *(uint32_t *)(data_020b11b8 + o);
    }
}
