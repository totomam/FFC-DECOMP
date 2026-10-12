#include "ffc/types.h"

typedef struct { int32_t x, y, z, w; } Vec4;
typedef struct { int32_t x, y, z, w, q; } Vec5;

extern uint32_t func_02081210(uint32_t a, uint32_t b);
extern void func_0206c1a0(Vec5 *out, uint32_t in);
extern uint32_t func_020817c8(uint32_t first, uint32_t second);
extern void func_0206286c(void *obj, int32_t a, int32_t b);
extern int32_t data_ov004_021596c4[];
extern int32_t data_ov004_021596f0;
extern uint32_t data_ov004_02159cc0[];

void func_ov004_0215488c(uint8_t *s) {
    int32_t v;
    Vec5 a;
    Vec4 b;
    int32_t *p;
    uint32_t o, t, x1, t2, x2, d1;
    uint8_t *obj;
    void **vt;
    uint32_t w, f, c0, c1;

    v = *(int32_t *)(s + 0x208) - 0x2d;
    p = (v < data_ov004_021596c4[11]) ? &data_ov004_021596f0 : &v;
    o = func_02081210((uint32_t)*p << 12, 0x2000);
    obj = *(uint8_t **)(s + 0x20c);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
    t = func_02081210(o, 0x2000);
    func_0206c1a0(&a, *(uint32_t *)(s + 0xf0));
    x1 = func_020817c8(o, a.x);
    d1 = x1 - t;
    t2 = func_02081210(o, 0x2000);
    func_0206c1a0((Vec5 *)&b, *(uint32_t *)(s + 0xf0));
    x2 = func_020817c8(o, b.x);
    func_0206286c(obj, (int32_t)(x2 - t2) >> 12, (int32_t)d1 >> 12);
    w = *(uint32_t *)(s + 0x208) - 1;
    *(uint32_t *)(s + 0x208) = w;
    if (w == 0) {
        f = *(uint32_t *)(obj + 0xc);
        f = (f & ~0xffu) | 2;
        *(uint32_t *)(obj + 0xc) = f;
        c0 = data_ov004_02159cc0[0];
        c1 = data_ov004_02159cc0[1];
        *(uint32_t *)(s + 0x94) = c0;
        *(uint32_t *)(s + 0x98) = c1;
    }
}
