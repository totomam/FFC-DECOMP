#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x28];
    uint8_t flag;
    uint8_t pad2;
    uint16_t x;
    uint16_t y;
} Obj;

extern uint32_t func_ov003_02155564(Obj *a);
extern void func_020095b8(void *obj, void *v);
extern void func_0200b65c(void *dst, void *src);
extern uint32_t func_02030f9c(void *first, void *second, uint32_t third);
extern void func_02084b2c(void *p, uint32_t v, uint32_t n);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005f3c(void *obj, uint32_t a, uint32_t b, void *c);
extern uint32_t func_02052000(void *obj);
extern void *func_020059cc(void *object);
extern void func_02028bfc(uint32_t b, void *C, uint32_t x, uint32_t y, uint32_t d);
extern uint8_t data_ov003_0217a0cc[];
extern uint8_t data_ov003_0217a0d0[];

void func_ov003_02155418(Obj *a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t A[3];
    uint32_t B[3];
    uint32_t C[3];
    uint32_t D[3];
    uint32_t sz;
    uint32_t res;
    uint32_t i;
    uint32_t v;
    uint32_t zero;

    if (func_ov003_02155564(a) == 0) {
        return;
    }
    func_020095b8(B, (void *)c);
    zero = 0;
    for (i = 0; i < 3; i++) {
        A[i] = zero;
    }
    if (b == 0) {
        func_0200b65c(A, B);
    } else {
        func_0200b65c(A, B);
        res = func_02030f9c(A, data_ov003_0217a0cc, zero);
        if (res != 0xFFFFFFFFu) {
            func_02084b2c(&sz, zero, 4);
            func_02086ad4(&sz, (uint32_t)data_ov003_0217a0d0, b);
            func_02005f3c(A, res + 2, 3, &sz);
        }
    }
    for (i = 0; i < 3; i++) {
        C[i] = zero;
    }
    func_020095b8(D, (void *)A);
    v = func_02052000(D);
    func_020059cc(D);
    if (v != 0) {
        func_0200b65c(C, A);
    } else {
        func_0200b65c(C, a);
        b = 0;
    }
    if (a->flag != b) {
        func_02028bfc(b, C, a->x, a->y, d);
    }
    a->flag = (uint8_t)b;
    func_020059cc(C);
    func_020059cc(A);
    func_020059cc(B);
}
