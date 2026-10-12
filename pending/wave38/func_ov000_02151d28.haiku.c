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

void func_ov000_02151d28(uint32_t idx, Src *s, uint8_t flag, uint8_t *base)
{
    Ent *e = (Ent *)(base + 0xbf4) + idx;
    uint8_t *src = base + 0xc20 + idx * 0xc0;
    uint32_t v = s->v;

    if (((base[0x14bc] >> 5) & 1) == 1) {
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
