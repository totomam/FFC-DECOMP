#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} FfcTmp;

extern void func_020179d0(FfcTmp *t, void *p);
extern uint8_t *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *h, uint32_t idx);
extern void func_02052c04(void *h);
extern void *func_02053290(void *object);
extern uint32_t func_02099f1c(uint32_t d);
extern float func_02099dd8(uint32_t v);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern float func_0209ab5c(float a);
extern int32_t func_020817c8(float first, uint32_t second);

int32_t func_02017aa4(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    struct { uint32_t pad[4]; FfcTmp t; } L;
    FfcTmp *p;
    uint8_t *base;
    uint8_t *p3;
    uint32_t off;
    uint32_t e;
    uint32_t *tab;
    uint32_t v;
    float x;
    float z;
    int32_t r;

    func_020179d0(&L.t, a);
    base = func_02052d90(L.t.f4, L.t.f8);
    off = *(uint32_t *)(base + 0xc);
    e = *(uint32_t *)(base + off + (c - 1) * 4);
    p3 = base + e;
    tab = (uint32_t *)(p3 + *(uint32_t *)(p3 + 4));
    v = tab[b - 1];

    if (func_02099dd8(func_02099f1c(d)) > 0.0f) {
        x = func_02099dd8(func_02099f1c(d));
        z = func_0209b108(0.5f, func_0209af28(4096.0f, x));
    } else {
        x = func_02099dd8(func_02099f1c(d));
        z = func_0209b338(func_0209af28(4096.0f, x), 0.5f);
    }
    z = func_0209ab5c(z);
    r = func_020817c8(z, v) >> 12;

    p = &L.t;
    if (L.t.f4 != 0) {
        if (p->fc != 0) {
            func_02052d3c(p->f4, p->f8);
        }
        func_02052c04(p->f4);
    }
    func_02053290(p);
    return r;
}
