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
    uint32_t i;
    uint32_t k;

    i = 0;
    do {
        for (k = 0; k < 3; k++) {
            fr.arr[k] = k;
        }
        func_020356d8(i, fr.arr);
        if (((FuncBits *)fr.arr)->bit0 == 0) {
            p = (uint8_t *)fr.arr + 1;
        } else {
            p = (void *)fr.arr[2];
        }
        func_02005988(fr.obj, p);
        func_020357c4(&fr.dec, fr.obj);
        r = func_02052d90(fr.dec.f4, fr.dec.f8);
        data_0213955c[i] = r[1];
        if (fr.dec.f4 != 0) {
            if (fr.dec.f12 != 0) {
                func_02052d3c(fr.dec.f4, fr.dec.f8);
            }
            func_02052c04(fr.dec.f4);
        }
        func_02053290(&fr.dec);
        func_020059cc(fr.obj);
        func_020059cc(fr.arr);
        i++;
    } while (i < 0x15);
    return 1;
}
