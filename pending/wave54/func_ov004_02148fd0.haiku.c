#include "ffc/types.h"

extern uint32_t func_ov004_02153114(void *obj);
extern void func_ov004_0214f598(int32_t *out, uint32_t v);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern void func_ov004_0214f628(int32_t *out, uint32_t v);
extern void func_ov004_0214f5e0(int32_t *out, uint32_t v);
extern int32_t func_02081210(int32_t a, int32_t b);
extern void *func_ov004_0215311c(void *obj);
extern void func_02021bb0(void *a, int32_t b, int32_t c);
extern void func_02021b48(void *a, int32_t b);

typedef struct {
    uint8_t pad0[0x80];
    void *obj;
    uint8_t pad1[0x4];
    uint8_t f88;
    uint8_t pad2[3];
    int32_t f8c;
    int32_t f90;
    uint8_t pad3[0x14];
    int32_t fa8;
    uint8_t fac;
} S;

void func_ov004_02148fd0(S *p)
{
    int32_t w;
    int32_t x;
    int32_t y;
    int32_t r;
    int32_t r4;
    int32_t arr[2];
    int32_t *q;

    if (func_ov004_02153114(p->obj) != 0) {
        if (p->f88 == 0) {
            func_ov004_0214f598(&x, func_ov004_02153114(p->obj));
            r = func_020817c8((0x19 << 14) - x, 2 << 12);
            arr[0] = (0x19 << 14) - r;
            arr[1] = 0;
            q = &arr[1];
            if (0 < arr[0]) {
                q = &arr[0];
            }
            r4 = (100 - (*q >> 12)) << 12;
            p->f90 = r4;
            func_ov004_0214f628(&y, func_ov004_02153114(p->obj));
            arr[0] = (y - r4) & 0xfffff000;
            arr[1] = 0;
            q = &arr[1];
            if (0 < arr[0]) {
                q = &arr[0];
            }
            w = *q;
        } else {
            int32_t a;
            int32_t b;
            int32_t c;
            p->f90 = 0;
            func_ov004_0214f5e0(&a, func_ov004_02153114(p->obj));
            b = func_020817c8((0x19 << 14) - a, 3 << 12);
            func_ov004_0214f598(&c, func_ov004_02153114(p->obj));
            r = func_020817c8((0x19 << 14) - c, 2 << 12);
            w = func_02081210(r + b, 5 << 12) & 0xfffff000;
        }
    } else {
        p->f90 = 0;
        w = 0;
    }

    p->f8c = w;
    func_02021bb0(func_ov004_0215311c(p->obj), 3, p->f90 >> 12);
    func_02021bb0(func_ov004_0215311c(p->obj), 2, p->f8c >> 12);

    if (p->fa8 == 0) {
        if (p->f8c == 0) {
            p->fa8 = 1;
        } else {
            p->fa8 = 2;
        }
    } else if (p->fa8 == 1) {
        if (p->f8c != 0) {
            p->fa8 = 2;
            if (p->fac != 0) {
                func_02021b48(func_ov004_0215311c(p->obj), 5);
            }
        }
    }
}
