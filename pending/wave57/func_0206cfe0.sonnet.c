#include "ffc/types.h"

typedef struct S {
    uint8_t p0[0x44];
    uint32_t sh;
    uint8_t p1[0xf94 - 0x48];
    uint8_t buf0[0x17d4 - 0xf94];
    uint8_t *a17d4;
    uint8_t buf1[0x2018 - 0x17d8];
    uint8_t *a2018;
    uint8_t buf2[0x285c - 0x201c];
    uint8_t *a285c;
    uint8_t buf3[0x30a0 - 0x2860];
    uint8_t *a30a0;
    uint8_t p2[0x30b0 - 0x30a4];
    uint32_t v30b0;
    uint8_t f30b4;
    uint8_t p3[0x3220 - 0x30b5];
    uint8_t *a3220;
} S;

extern void func_0206cb44(S *self);
extern void func_0206d118(uint8_t *p);
extern int func_0208e0d8(uint8_t *buf, uint32_t id, uint16_t mask, uint16_t n, uint32_t flag);
extern uint32_t func_0206cbc8(uint32_t v);
extern uint8_t data_020b2010[];
extern uint32_t data_0213e178;

#define AL(s, f) ((uint8_t *)((((uint32_t)((s)->f) + 0x1f)) & ~0x1fu))

void func_0206cfe0(S *s, uint16_t *msg)
{
    switch (msg[2]) {
    case 0xc:
        if (msg[1] == 0xe) func_0206cb44(s);
        break;
    case 0xa:
        if (msg[1] != 0) { func_0206cb44(s); return; }
        func_0206d118(data_020b2010);
        s->v30b0 = 7;
        s->f30b4 = 1;
        s->a3220[6] = 1;
        s->a17d4 = AL(s, buf0);
        if (func_0208e0d8(s->a17d4, 0xc, (uint16_t)((1u << s->sh) - 1), 6, 1)) { func_0206cb44(s); return; }
        s->a2018 = AL(s, buf1);
        if (func_0208e0d8(s->a2018, 0xd, (uint16_t)((1u << s->sh) - 1), 2, 1)) { func_0206cb44(s); return; }
        s->a285c = AL(s, buf2);
        if (func_0208e0d8(s->a285c, 0xe, (uint16_t)((1u << s->sh) - 1), 0x10, 1)) { func_0206cb44(s); return; }
        s->a30a0 = AL(s, buf3);
        if (func_0208e0d8(s->a30a0, 0xf, (uint16_t)((1u << s->sh) - 1), (uint16_t)func_0206cbc8(data_0213e178), 1)) { func_0206cb44(s); }
        break;
    }
}
