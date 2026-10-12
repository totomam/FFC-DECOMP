#include "ffc/types.h"

extern void func_ov009_021a4084(void *a, uint32_t b);
extern void func_02036750(void *a);
extern void func_020367a8(void *a);
extern void *func_020903cc(void *object, int c, uint32_t n);
extern uint32_t *data_0213df18;
extern uint8_t data_ov011_021cb00c[];
extern uint8_t data_020ae664[];

typedef struct {
    uint32_t a;
    uint16_t h[21];
    uint32_t w;
    uint8_t b[20];
    uint8_t c[16];
} Loc;

typedef struct {
    uint32_t x[4];
} Quad;

void *func_ov011_021bf0f8(void *p, uint8_t r1, void *r6, uint8_t r3)
{
    Loc loc;
    int i;

    func_ov009_021a4084(p, data_0213df18[9]);
    *(void **)((uint8_t *)p + 0x0) = data_ov011_021cb00c;
    *(uint32_t *)((uint8_t *)p + 0x290) = 0;
    *(uint32_t *)((uint8_t *)p + 0x294) = 0;
    *(uint32_t *)((uint8_t *)p + 0x298) = 0;
    *(uint32_t *)((uint8_t *)p + 0x29c) = 0;
    *(uint32_t *)((uint8_t *)p + 0x2b4) = 0;
    *(uint32_t *)((uint8_t *)p + 0x2b8) = 0;
    *(uint32_t *)((uint8_t *)p + 0x2bc) = 0;
    *(uint8_t *)((uint8_t *)p + 0x2c0) = r3;
    *(uint32_t *)((uint8_t *)p + 0x2c4) = 6;
    *(uint8_t *)((uint8_t *)p + 0x2c8) = 0;
    *(uint8_t *)((uint8_t *)p + 0x2c9) = r1;
    func_02036750(&loc);
    *(void **)((uint8_t *)p + 0x2cc) = data_020ae664;

    for (i = 0; i < 21; i++) {
        ((uint16_t *)((uint8_t *)p + 0x2d0))[i] = loc.h[i];
    }
    *(uint32_t *)((uint8_t *)p + 0x2fc) = loc.w;
    for (i = 0; i < 20; i++) {
        ((uint8_t *)p)[0x300 + i] = loc.b[i];
    }
    *(Quad *)((uint8_t *)p + 0x314) = *(Quad *)loc.c;
    func_020367a8(&loc);

    *(uint8_t *)((uint8_t *)p + 0x324) = 0;
    *(uint32_t *)((uint8_t *)p + 0x328) = 0;
    *(void **)((uint8_t *)p + 0x32c) = r6;
    *(uint32_t *)((uint8_t *)p + 0x330) = *(uint32_t *)((uint8_t *)r6 + 0x70);
    *(uint32_t *)((uint8_t *)p + 0x338) = 0;
    *(uint32_t *)((uint8_t *)p + 0x33c) = 0;
    *(uint8_t *)((uint8_t *)p + 0x340) = 0;
    func_020903cc((uint8_t *)p + 0xec, 0, 0x28);
    return p;
}
