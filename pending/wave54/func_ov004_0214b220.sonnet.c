#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

extern void *func_ov004_02149be0(uint8_t *p);
extern int32_t func_ov004_02149c04(uint8_t *p);
extern int32_t *func_ov004_021530bc(void *a, int32_t b);
extern void func_0205770c(Pair *out, int32_t *src);
extern int32_t func_ov004_02153144(void *a, int32_t b, Pair c);
extern void func_ov004_0214adec(uint8_t *p);
extern void func_ov004_0214ae54(uint8_t *p, Pair a);
extern void func_02084b2c(int32_t a, int32_t b, int32_t c);
extern void *func_ov004_02153114(void *a);
extern int32_t func_ov004_0214e85c(void *a, int32_t b, Pair c);
extern int32_t func_ov004_0215311c(void *a);
extern void func_02021b48(int32_t a, int32_t b);
extern void func_ov004_0214b388(uint8_t *p, Pair a, Pair b);
extern void func_ov004_0214ae20(uint8_t *p);
extern int32_t data_ov004_02158cd4[];

void func_ov004_0214b220(uint8_t *p)
{
    void *a;
    int32_t b;
    int32_t *r6;
    struct { Pair a; Pair b; } xx;
    Pair pr;
    Pair pr2;
    Pair pos;
    Pair vv;
    int32_t x;
    int32_t y;
    int32_t v1;
    int32_t v2;

    r6 = func_ov004_021530bc(func_ov004_02149be0(p), func_ov004_02149c04(p));
    if (!(r6[1] & 0x1000)) goto fail;
    {
        a = func_ov004_02149be0(p);
        b = func_ov004_02149c04(p);
        func_0205770c(&pr, r6);
        if (func_ov004_02153144(a, b, pr)) {
            func_ov004_0214adec(p);
            func_0205770c(&pr2, r6);
            func_ov004_0214ae54(p, pr2);
            func_0205770c(&pos, r6);
            x = pos.a;
            y = pos.b;
            xx.a.a = x;
            xx.a.b = y;
            xx.b = xx.a;
            v1 = (x - (y & 8) / 2) / 8 + data_ov004_02158cd4[9];
            v2 = y / 8 + data_ov004_02158cd4[10];

            vv.a = v1;
            vv.b = v2;
            if (*(p + 0x95) == 0) {
                *(p + 0x95) = 1;
                *(int32_t *)(p + 0x98) = x;
                *(int32_t *)(p + 0x9c) = y;
                *(int32_t *)(p + 0xa0) = v1;
                *(int32_t *)(p + 0xa4) = v2;
                func_02084b2c(*(int32_t *)(p + 0xa8), 0,
                              *(int32_t *)(p + 0xb4) * *(int32_t *)(p + 0xb8));
                a = func_ov004_02149be0(p);
                b = func_ov004_02149c04(p);
                if (func_ov004_0214e85c(func_ov004_02153114(a), b, vv)) {
                    func_02021b48(func_ov004_0215311c(func_ov004_02149be0(p)), 0x12);
                    return;
                }
                func_02021b48(func_ov004_0215311c(func_ov004_02149be0(p)), 0xd);
                return;
            } else {
                func_ov004_0214b388(p, xx.a, vv);
                return;
            }
        }
    }
fail:
    *(p + 0x95) = 0;
    func_ov004_0214ae20(p);
}
