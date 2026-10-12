#include "ffc/types.h"

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020b11b4[];

typedef struct Entry {
    uint8_t flag;
    uint8_t pad0[7];
    uint32_t kind;
    uint32_t idx;
    uint8_t pad1[0x1c - 0x10];
} Entry;

typedef struct Obj {
    uint32_t w0;
    uint8_t pad0[0x18 - 4];
    uint32_t f18;
    uint32_t f1c;
    uint8_t pad1[0x28 - 0x20];
} Obj;

typedef struct Ctx {
    uint8_t pad0[0x24];
    Obj *objs;
    uint32_t count;
    uint8_t pad1[0x2d - 0x2c];
    uint8_t flag;
    uint8_t pad2[0x60 - 0x2e];
    Entry *entries;
} Ctx;

void func_020644a0(Ctx *c)
{
    uint32_t i;

    c->flag = 0;
    for (i = 0; i < c->count; i++) {
        Entry *e = &c->entries[i];
        if (e->flag != 0) {
            uint32_t kind = e->kind;
            Obj *o = &c->objs[e->idx];
            uint32_t w;
            uint32_t idx;
            w = (o->w0 & 0xfffffcffu) | ((kind & 3u) << 8);
            o->w0 = w;
            idx = ((w >> 30) << 2) | ((w >> 14) & 3u);
            if (kind == 3) {
                o->f18 = data_020b11b4[idx].a << 1;
                o->f1c = data_020b11b4[idx].b << 1;
            } else {
                o->f18 = data_020b11b4[idx].a;
                o->f1c = data_020b11b4[idx].b;
            }
        }
    }
}
