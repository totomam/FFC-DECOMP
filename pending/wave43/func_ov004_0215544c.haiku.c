#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Pair;

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t w;
} Vec4;

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t w;
    int32_t v;
} Vec5;

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
} Vec3;

extern int32_t func_ov004_0214f13c(void *p);
extern int32_t func_02081210(int32_t a, int32_t b);
extern void func_0206c1a0(void *out, void *src);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern void func_ov004_0214e56c(void *obj, Pair v);
extern uint32_t data_ov004_02159cf0[2];

void func_ov004_0215544c(void *self) {
    uint8_t *p = (uint8_t *)self;
    Vec4 zero;
    Vec5 a;
    Vec3 b;
    Pair out;
    int32_t r7 = func_ov004_0214f13c(*(void **)(p + 0xe4));
    int32_t r4 = func_02081210(0x6000, 0x2000);
    func_0206c1a0(&a, *(void **)(p + 0xf0));
    r4 = func_020817c8(0x6000, a.x) - r4;
    int32_t r6 = func_02081210(0x6000, 0x2000);
    func_0206c1a0(&b, *(void **)(p + 0xf0));
    int32_t d = func_020817c8(0x6000, b.x) - r6;
    out.x = d >> 12;
    out.y = r4 >> 12;
    func_ov004_0214e56c(*(void **)(p + 0xe4), out);
    if (r7 == 0) {
        zero.x = 0;
        zero.y = 0;
        func_ov004_0214e56c(*(void **)(p + 0xe4), *(Pair *)&zero);
        *(uint32_t *)(p + 0x94) = data_ov004_02159cf0[0];
        *(uint32_t *)(p + 0x98) = data_ov004_02159cf0[1];
    }
}
