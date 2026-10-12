#include "ffc/types.h"

typedef struct Obj {
    uint32_t f00; uint32_t p04; uint32_t f08; uint32_t p0c;
    uint32_t f10; uint32_t p14; uint32_t f18; uint32_t p1c;
    uint32_t f20; uint32_t p24; uint32_t f28; uint32_t f2c;
    uint16_t h[17];
    uint16_t hp;
    uint32_t f54; uint32_t f58; uint32_t f5c;
} Obj;

typedef struct Pair { uint32_t a; uint32_t b; } Pair;

extern void func_02035f58(void *object);
extern uint8_t func_02036360(const void *object);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020366d4(void *object);
extern uint32_t func_02036344(const void *object);
extern uint32_t func_020363a4(const void *object);
typedef void *(*Fn0219)(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
#define func_0219a130(...) (((Fn0219)0x0219a130)(__VA_ARGS__))
extern void func_020695ec(void *object, void *arg);
extern void func_020692a4(void *object);
extern void *func_02035fd0(void *object);
extern Pair data_ov011_021cbb18[];
extern Pair data_ov011_021cbb40[];

void func_ov011_021c7aac(uint8_t *p)
{
    Obj o;
    Obj *e;
    Pair pr;
    volatile Pair pa;
    volatile Pair pe;
    uint32_t tmp;
    uint32_t i;
    uint32_t k;
    uint32_t idx;
    uint32_t *arr;
    uint16_t *src;
    uint16_t *dst;
    Pair *tab;
    void *r6;
    volatile uint32_t t0, t1, t2; uint32_t t3;
    uint8_t c;

    for (i = 0; i < *(uint32_t *)(p + 0x128); i = (uint8_t)(i + 1)) {
        func_02035f58(&o);
        arr = *(uint32_t **)(p + 0x124);
        idx = arr[i];
        e = (Obj *)(p + 0x140 + idx * 0x60);
        o.f00 = e->f00; o.f08 = e->f08; o.f10 = e->f10; o.f18 = e->f18;
        o.f20 = e->f20; o.f28 = e->f28; o.f2c = e->f2c;
        src = e->h;
        dst = o.h;
        for (k = 0x11; k != 0; k--) {
            *dst++ = *src++;
        }
        o.f54 = e->f54; o.f58 = e->f58; o.f5c = e->f5c;

        c = func_02036360(&o);
        if (c != 0) {
            r6 = func_0205681c(0xb4);
            if (r6 != 0) {
                if (p[0x334]) tab = data_ov011_021cbb18; else tab = data_ov011_021cbb40;
                pa = tab[i];
                pr.a = pa.a; pr.b = pa.b;
                t0 = func_02036360(&o);
                t1 = func_020366d4(&o);
                t2 = func_02036344(&o);
                t3 = func_020363a4(&o);
                r6 = func_0219a130(r6, *(uint32_t *)(p + 0xb8), pr.a, pr.b, t0, t1, t2, t3);
            }
            *(void **)(p + 0x110 + i * 4) = r6;
            func_020695ec(p, r6);
        } else {
            r6 = func_0205681c(0xb4);
            if (r6 != 0) {
                if (p[0x334]) tab = data_ov011_021cbb18; else tab = data_ov011_021cbb40;
                pe = tab[i];
                r6 = func_0219a130(r6, *(uint32_t *)(p + 0xb8), pe.a, pe.b, 0xffff, 0, 0, 0);
            }
            *(void **)(p + 0x110 + i * 4) = r6;
            func_020695ec(p, r6);
            func_020692a4(r6);
        }

        func_02035fd0(&o);
    }
}
