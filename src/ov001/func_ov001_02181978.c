#include "ffc/types.h"

extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern int32_t func_ov001_021803b0(void *self, uint8_t *base, int32_t n);
extern int32_t func_ov001_0217fdf8(void *p);
extern void func_ov001_0217fe28(void *p, const uint8_t *src, int32_t n);
extern void func_ov001_0217fe60(void *p, int32_t a, int32_t n);
extern uint8_t data_ov001_02191a24[];

struct Inner {
    uint8_t pad[0x40];
    int32_t f40;
    int32_t f44;
};

struct Outer {
    uint8_t pad0[8];
    struct Inner *inner;
    uint8_t pad1[0x50 - 0x0c];
    uint32_t f50;
    uint32_t f54;
    uint32_t f58;
};

int func_ov001_02181978(struct Outer *o, uint8_t *base, int32_t n) {
    uint32_t s1;
    uint32_t s0;

    if (n < 2 || func_02090410(base + o->inner->f44, data_ov001_02191a24, 2) != 0) {
        if (func_ov001_021803b0(o, base, n) == 0) {
            return 0;
        }
        return 1;
    }

    int32_t m = n + 2;
    if (func_ov001_0217fdf8(&o->f50) < m) {
        return 1;
    }

    s0 = o->f50;
    s1 = o->f58;

    if (o->inner->f40 == 2) {
        func_ov001_0217fe28(&o->f50, base, 2);
    }
    func_ov001_0217fe28(&o->f50, data_ov001_02191a24, 2);
    func_ov001_0217fe28(&o->f50, base + o->inner->f44, n - o->inner->f44);

    if (func_ov001_021803b0(o, (uint8_t *)(s0 + s1), m) == 0) {
        return 0;
    }
    func_ov001_0217fe60(&o->f50, -1, m);
    return 1;
}
