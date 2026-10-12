#include "ffc/types.h"

typedef struct {
    uint32_t bit0 : 1;
    uint32_t rest : 31;
} FuncBits;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t f12;
} FuncDec;

extern uint32_t func_020356d8(uint32_t index, void *object);
extern void func_02005988(void *obj, void *src);
extern void func_020357c4(void *dst, void *src);
extern uint32_t *func_02052d90(uint32_t a, uint32_t b);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void *func_020059cc(void *object);
extern uint32_t data_0213955c[];

uint32_t func_020358f8(void) {
    struct {
        FuncDec dec;
        uint32_t obj[3];
        uint32_t arr[3];
    } fr;
    uint32_t *r;
    void *p;
    void *s;
    uint32_t i;
    uint32_t t;
    uint32_t k;
    uint32_t *o;
    uint8_t *q;
    FuncDec *d;
    uint32_t *base;

    i = 0;
    base = fr.arr;
    do {
        k = 0;
        t = k;
        do {
            base[k] = t;
            k++;
        } while (k < 3);
        q = (uint8_t *)fr.arr;
        func_020356d8(i, q);
        if (((FuncBits *)fr.arr)->bit0 == 0) {
            s = q + 1;
        } else {
            s = (void *)fr.arr[2];
        }
        q = (uint8_t *)fr.obj;
        p = q;
        func_02005988(p, s);
        d = (FuncDec *)q;
        q = (uint8_t *)&fr.dec;
        d = (FuncDec *)q;
        func_020357c4(d, p);
        r = func_02052d90(fr.dec.f4, fr.dec.f8);
        data_0213955c[i] = r[1];
        if (fr.dec.f4 != 0) {
            if (d->f12 != 0) {
                func_02052d3c(d->f4, d->f8);
            }
            func_02052c04(d->f4);
        }
        func_02053290(d);
        func_020059cc(fr.obj);
        func_020059cc(fr.arr);
        i++;
    } while (i < 0x15);
    return 1;
}
