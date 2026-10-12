#include "ffc/types.h"

extern uint32_t func_0207ab40(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0207aa88(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_0207a7dc(void);
extern uint32_t func_0207ac88(uint32_t a, uint32_t b, uint32_t (*c)(void), uint32_t d, uint32_t e);
extern void func_02084ca4(void *dst, void *end, uint32_t n);
extern void func_02084b2c(void *dst, uint32_t v, uint32_t n);
extern void func_02087890(void *obj, uint32_t n);
extern void func_0207ab60(uint32_t a, uint32_t b);
extern uint32_t func_0207b360(void);

typedef struct {
    uint8_t pad[0x38];
    uint32_t cnt;
} Glob;

extern Glob data_0213ec94;

uint32_t func_0207b204(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t r4;
    uint32_t n;
    uint32_t sz;

    r4 = func_0207ab40(a, b, c);
    if (r4 == 0) {
        r4 = 0;
        if (func_0207aa88(a, &data_0213ec94, 0x3c, 0) != 0x3c) {
            return r4;
        }
        n = data_0213ec94.cnt << 2;
        sz = (n << 1) + 0x3c;
        if (b == 0) {
            return r4;
        }
        if (c != 0) {
            r4 = func_0207a7dc();
        }
        r4 = func_0207ac88(b, sz + 0x20, func_0207b360, r4, a);
        if (r4 == 0) {
            return 0;
        }
        if (n + 0x3c != func_0207aa88(a, (void *)r4, n + 0x3c, 0)) {
            return 0;
        }
        func_02084ca4((uint8_t *)r4 + 0x3c,
                      (uint8_t *)r4 + 0x3c + (((Glob *)r4)->cnt << 2),
                      n);
        func_02084b2c((uint8_t *)r4 + 0x3c, 0, n);
        func_02087890((void *)r4, sz);
        if (c != 0) {
            func_0207ab60(a, r4);
        }
    }
    return r4;
}
