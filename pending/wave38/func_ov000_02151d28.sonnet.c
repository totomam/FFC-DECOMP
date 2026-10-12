#include "ffc/types.h"

extern void func_020849f4(void *dst, const void *src, uint32_t n);

typedef struct {
    uint16_t x;
    uint16_t v;
} Src;

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
} Ent;

typedef struct {
    uint8_t pad0[0xbf4];
    Ent ents[11];
    uint8_t bufs[4][0xc0];
    uint8_t pad1[0x14bc - 0xbf4 - 44 - 4*0xc0];
    uint8_t m;
} Base;

void func_ov000_02151d28(uint32_t idx, Src *s, uint8_t flag, Base *base)
{
    uint32_t v = s->v;
    Ent *e = &base->ents[idx];
    uint8_t *src = base->bufs[idx];

    if (((base->m >> 5) & 1) == 1) {
        if (v & 2) {
            v = (v << 22) >> 24;
        } else {
            v = (uint32_t)(((int32_t)v >> 2) + 0x19) & 0xff;
        }
    }

    if ((uint8_t)v > e->c) {
        e->c = (uint8_t)v;
        e->d = (uint8_t)((e->d & 0x80) | (flag & 0x7f));
    }

    func_020849f4(s, src, 0xc0);
}
