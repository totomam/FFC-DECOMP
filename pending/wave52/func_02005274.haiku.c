#include "ffc/types.h"

extern uint32_t func_0205db04(const void *object);
extern uint32_t func_0205db1c(const void *object);
extern uint32_t func_020583cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0205da88(const void *object);
extern uint32_t func_02058228(uint32_t a, uint32_t b, uint32_t c, int32_t d);
extern uint32_t func_0205db2c(const void *object);
extern uint32_t func_0205fbc8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0205da5c(const void *object);
extern uint32_t func_0205fa00(uint32_t a, uint32_t b, uint32_t c);

typedef struct Sub {
    uint32_t _0[2];
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Sub;

typedef struct Inner {
    uint32_t _0[6];
    Sub *s18;
} Inner;

typedef struct Ctx {
    uint32_t f0;
    Inner *f4;
    void *f8;
    uint32_t fc;
    uint32_t f10;
    uint8_t f14;
} Ctx;

void func_02005274(Ctx *a) {
    uint32_t r4;
    uint32_t v;
    uint32_t r6;
    uint32_t r2;
    uint32_t zero = 0;

    if (a->f14 == 0) {
        r4 = (func_0205db04(a->f8) == 0) ? func_0205db1c(a->f8) : 1;
        if (func_0205db04(a->f8) == 0 || a->f4->s18->f10 == 0) {
            v = a->f4->s18->fc;
        } else {
            v = a->f4->s18->f10;
        }
        a->f10 = func_020583cc(v, r4, 0, 1);
        func_02058228(a->f10, func_0205da88(a->f8), zero, zero - 1);
    }

    r4 = a->f4->s18->f8;
    r6 = func_0205db04(a->f8);
    r2 = func_0205db2c(a->f8);
    a->fc = func_0205fbc8(r4, r6, r2, 1);
    func_0205fa00(a->fc, func_0205da5c(a->f8), 0);
}
