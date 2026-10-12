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

typedef struct {
    uint8_t pad0[0x290];
    uint32_t f290, f294, f298, f29c;
    uint8_t pad1[0x14];
    uint32_t f2b4, f2b8, f2bc;
    uint8_t f2c0; uint8_t p1[3];
    uint32_t f2c4;
    uint8_t f2c8, f2c9; uint8_t p2[2];
    void *f2cc;
    uint16_t h[21]; uint16_t p3;
    uint32_t f2fc;
    uint8_t b[20];
    Quad q;
    uint8_t f324; uint8_t p4[3];
    uint32_t f328;
    void *f32c;
    uint32_t f330;
    uint32_t p5;
    uint32_t f338, f33c;
    uint8_t f340;
} Obj;

void *func_ov011_021bf0f8(Obj *p, uint8_t r1, uint8_t *r6, uint8_t r3)
{
    Loc loc;
    int i;

    func_ov009_021a4084(p, data_0213df18[9]);
    *(void **)p = data_ov011_021cb00c;
    p->f290 = 0; p->f294 = 0; p->f298 = 0; p->f29c = 0;
    p->f2b4 = 0; p->f2b8 = 0; p->f2bc = 0;
    p->f2c0 = r3;
    p->f2c4 = 6;
    p->f2c8 = 0;
    p->f2c9 = r1;
    func_02036750(&loc);
    p->f2cc = data_020ae664;
    { uint16_t *sp = loc.h; uint16_t *d = p->h; for (i = 21; i > 0; i--) { *d = *sp; d++; sp++; } }
    p->f2fc = loc.w;
    { uint8_t *d = p->b; uint8_t *sp = loc.b; for (i = 20; i != 0; i--) *d++ = *sp++; }
    p->q = *(Quad *)loc.c;
    func_020367a8(&loc);
    p->f324 = 0;
    p->f328 = 0;
    p->f32c = r6;
    p->f330 = *(uint32_t *)(r6 + 0x70);
    p->f338 = 0;
    p->f33c = 0;
    p->f340 = 0;
    func_020903cc((uint8_t *)p + 0xec, 0, 0x28);
    return p;
}
