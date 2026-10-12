#include "ffc/types.h"

extern void func_020095b8(void *obj, void *v);
extern uint32_t func_020516d0(void *v, void *tbl, uint32_t x);
extern uint32_t func_020516ec(void *v, void *tbl, uint32_t x);
extern void func_02005988(void *obj, void *msg);
extern uint32_t func_02008f2c(void *obj, void *v, uint32_t a, uint32_t b);
extern uint8_t data_020b0480[];
extern uint8_t data_020b0484[];

typedef struct {
    uint32_t word;
    uint32_t ext;
} FfcWordValue;

void func_02050e2c(void *obj, FfcWordValue *v)
{
    uint32_t n;
    uint32_t lo;
    uint32_t hi;

    if (v->word & 1) {
        n = v->ext;
    } else {
        n = (*(uint8_t *)v >> 1) & 0x7f;
    }
    if (n == 0) {
        func_020095b8(obj, v);
        return;
    }
    lo = func_020516d0(v, data_020b0480, 0);
    hi = func_020516ec(v, data_020b0480, -1);
    if (lo == (uint32_t)-1) {
        func_02005988(obj, data_020b0484);
        return;
    }
    if (lo > hi) {
        func_02005988(obj, data_020b0484);
        return;
    }
    func_02008f2c(obj, v, lo, hi - lo + 1);
}
