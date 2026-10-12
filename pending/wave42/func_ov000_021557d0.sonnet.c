#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t c;
    uint32_t l10;
    uint32_t f14;
} G_t;

extern int func_02092948(uint32_t a, void *b);
extern int func_ov000_02156474(uint32_t a, G_t *b);
extern void func_ov000_021585a8(void *p);
extern uint32_t func_ov000_02155d1c(uint32_t a, void *b, void *c);
extern int func_ov000_0215653c(uint32_t a);
extern uint32_t func_020871d4(const void *object);
extern void func_ov000_021565a8(uint32_t a, uint32_t b);
extern G_t data_ov000_02169b64;
extern uint32_t data_ov000_02169b80[];
extern uint32_t data_ov000_0216e294[];
extern uint32_t data_ov000_0216e2a0[];
extern uint32_t data_02141510[];

typedef struct { uint8_t pad[4]; uint8_t *p; } B_t;
extern B_t data_ov000_0216e294x;
int func_ov000_021557d0(int param)
{
    uint8_t *p;
    int off;
    G_t *g = &data_ov000_02169b64;
    if (func_02092948(g->f0, data_ov000_02169b80)) {
        g->f14 = 1;
    }
    p = (uint8_t *)data_ov000_0216e294[1];
    data_ov000_02169b64.c = *(uint32_t *)(p + 0x120c);
    data_ov000_02169b64.l10 = *(uint32_t *)(p + 0x1210);
    if (func_ov000_02156474(*(uint32_t *)(p + 0x1314), &data_ov000_02169b64)) {
        return 4;
    }
    if (param == 1) {
        func_ov000_021585a8(data_ov000_0216e2a0);
    }
    {
    uint32_t *base = data_ov000_0216e294;
    off = 0x1314;
    uint32_t r = func_ov000_02155d1c(*(uint32_t *)((uint8_t *)base[1] + off), (uint8_t *)base[1] + 0x1200, (uint8_t *)base[1] + 0x11cc);
    *(uint32_t *)((uint8_t *)base[1] + 0x1004) = r;
    if (*(uint32_t *)((uint8_t *)base[1] + 0x1004)) return 4;
    if (func_ov000_0215653c(*(uint32_t *)((uint8_t *)base[1] + off))) return 4;
    {
        uint32_t n = func_020871d4((void *)data_02141510[1]);
        func_ov000_021565a8(*(uint32_t *)((uint8_t *)base[1] + off), n - 1);
    }
    return 0;
    }
}
