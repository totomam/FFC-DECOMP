#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov001_0217ef6c(void *ctx, void *msg);
extern void *func_020903cc(void *dst, int c, uint32_t n);

typedef struct {
    uint32_t lo;
    uint32_t hi;
} Pair;

extern int func_ov001_0217894c(void *ctx, Pair p, void *obj, void *desc, int flag);
extern uint8_t data_ov001_02190ed4[];

typedef struct {
    uint32_t type;
    uint32_t p1[2];
    uint32_t a;
    uint32_t b;
    uint32_t p2[2];
    uint32_t c;
} Desc;

int func_ov001_0217b51c(void *ctx, Desc *d) {
    Pair pr;
    uint8_t *g;
    uint32_t *obj;
    uint8_t *q;

    pr.lo = d->a;
    pr.hi = d->b;
    g = *(uint8_t **)ctx;
    if (pr.lo == 0) {
        return 0;
    }

    switch (d->type) {
    case 0:
        obj = func_ov000_021653d4(0x20);
        if (obj == 0) {
            func_ov001_0217ef6c(ctx, data_ov001_02190ed4);
            return 1;
        }
        func_020903cc(obj, 0, 0x20);
        obj[0] = d->c;
        if (*(uint32_t *)(g + 0x5b8) == 0x201) {
            obj[1] = *(uint32_t *)(g + 0x1a0);
            *(uint32_t *)(g + 0x1a0) = 0;
        }
        return func_ov001_0217894c(ctx, pr, obj, d, 0);

    case 1:
    case 2:
        obj = func_ov000_021653d4(8);
        if (obj == 0) {
            func_ov001_0217ef6c(ctx, data_ov001_02190ed4);
            return 1;
        }
        q = (uint8_t *)obj;
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
        q[4] = 0;
        q[5] = 0;
        q[6] = 0;
        obj[0] = d->c;
        q[7] = 0;
        return func_ov001_0217894c(ctx, pr, obj, d, 0);

    case 3:
        obj = func_ov000_021653d4(0x204);
        if (obj == 0) {
            func_ov001_0217ef6c(ctx, data_ov001_02190ed4);
            return 1;
        }
        func_020903cc(obj, 0, 0x204);
        obj[0] = d->c;
        return func_ov001_0217894c(ctx, pr, obj, d, 0);

    case 4: {
        uint32_t n = 0x10;
        obj = func_ov000_021653d4(0x10);
        if (obj == 0) {
            func_ov001_0217ef6c(ctx, data_ov001_02190ed4);
            return 1;
        }
        q = (uint8_t *)obj;
        while (n != 0) {
            *q = 0;
            q++;
            n--;
        }
        obj[0] = d->c;
        obj[3] = 0;
        return func_ov001_0217894c(ctx, pr, obj, d, 0);
    }

    case 5:
    case 6:
        obj = func_ov000_021653d4(4);
        if (obj == 0) {
            func_ov001_0217ef6c(ctx, data_ov001_02190ed4);
            return 1;
        }
        q = (uint8_t *)obj;
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
        obj[0] = d->c;
        return func_ov001_0217894c(ctx, pr, obj, d, 0);

    default:
        return 0;
    }
}
