#include "ffc/types.h"

extern void func_0209cf5c(void *p, int n, int size, void *init, void *dtor);
extern void func_ov002_021c9124(void);
extern void func_ov002_021c9130(void);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Triple;

typedef struct {
    uint8_t b0;
    uint8_t p1_0; uint8_t p1_1; uint8_t p1_2;
    uint32_t w4;
    uint8_t b8;
    uint8_t p9_0; uint8_t p9_1; uint8_t p9_2;
    uint32_t wc;
    uint32_t w10;
    uint8_t b14;
    uint8_t p15_0; uint8_t p15_1; uint8_t p15_2;
    uint8_t b18;
    uint8_t p19_0; uint8_t p19_1; uint8_t p19_2;
    uint32_t w1c;
    uint32_t w20;
    Pair *p24;
    uint8_t b28;
    uint8_t p29_0; uint8_t p29_1; uint8_t p29_2;
    uint8_t b2c;
    uint8_t p2d_0; uint8_t p2d_1; uint8_t p2d_2;
    uint32_t w30;
    uint32_t w34;
    uint8_t b38;
} Args;

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint8_t b14;
    uint8_t pad15[3];
    uint32_t w18;
    uint8_t b1c;
    uint8_t pad1d[3];
    uint32_t w20;
    uint32_t w24;
    uint8_t b28;
    uint8_t b29;
    uint8_t pad2a[2];
    uint32_t w2c;
    uint32_t w30;
    uint8_t b34;
    uint8_t pad35[3];
    Pair arr38[3];
    uint8_t b50;
    uint8_t b51;
    uint8_t pad52[2];
    uint32_t w54;
    uint32_t w58;
} Out;

Out *func_ov002_021c8e70(Out *out, const Triple *src, uint32_t a2, uint32_t a3,
    uint8_t b0, uint32_t w4, uint8_t b8, uint32_t wc, uint32_t w10, uint8_t b14, uint8_t b18,
    uint32_t w1c, uint32_t w20, Pair *p24, uint8_t b28, uint8_t b2c, uint32_t w30, uint32_t w34, uint8_t b38)
{
    int i;
    out->w0 = src->a;
    out->w4 = src->b;
    out->w8 = src->c;
    out->w10 = a3;
    out->wc = a2;
    out->b14 = b0;
    out->w18 = w4;
    out->b1c = b8;
    out->w20 = wc;
    out->w24 = w10;
    out->b28 = b14;
    out->b29 = b18;
    out->w2c = w1c;
    out->w30 = w20;
    out->b34 = b38;
    func_0209cf5c(out->arr38, 3, 8, (void *)func_ov002_021c9124, (void *)func_ov002_021c9130);
    out->b50 = b28;
    out->b51 = b2c;
    out->w54 = w30;
    out->w58 = w34;
    for (i = 0; i < 3; i++) {
        out->arr38[i].a = p24[i].a;
        out->arr38[i].b = p24[i].b;
    }
    return out;
}
