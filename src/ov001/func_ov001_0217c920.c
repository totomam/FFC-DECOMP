#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int32_t func_ov001_0217ec8c(void *ctx, void *o, int32_t flag);
extern int32_t func_02092a04(void *o, void *p, int32_t n);
extern void func_ov001_0217ef50(void *ctx, int32_t a, void *p);
extern void func_ov001_021788f0(void *ctx, int32_t a, int32_t b);
extern void *func_ov000_021653d4(int32_t size);
extern void func_ov001_0217ef6c(void *ctx, void *p);
extern int32_t func_ov001_0217894c(void *ctx, Pair p, void *obj, void *d, int32_t z);
extern void func_ov001_0217b7f4(void *ctx, void *d);
extern uint8_t data_ov001_02191300[];
extern uint8_t data_ov001_021912b4[];
extern uint8_t data_ov001_021912f0[];

int32_t func_ov001_0217c920(void *ctx, void *d, void *o)
{
    uint8_t *base = *(uint8_t **)ctx;
    Pair tmp;
    uint32_t *obj;
    int32_t r;

    if (func_ov001_0217ec8c(ctx, o, 1) != 0) {
        return 4;
    }
    if (func_02092a04(o, data_ov001_02191300, 5) != 0) {
        func_ov001_0217ef50(ctx, 1, data_ov001_021912b4);
        func_ov001_021788f0(ctx, 3, 1);
        return 3;
    }
    tmp = *(Pair *)((uint32_t *)d + 3);
    if (tmp.a != 0) {
        obj = func_ov000_021653d4(8);
        if (obj == 0) {
            func_ov001_0217ef6c(ctx, data_ov001_021912f0);
            return 1;
        }
        obj[1] = *(uint32_t *)(base + 0x1a0);
        obj[0] = 0;
        r = func_ov001_0217894c(ctx, tmp, obj, d, 0);
        if (r != 0) {
            return r;
        }
    }
    func_ov001_0217b7f4(ctx, d);
    return 0;
}
