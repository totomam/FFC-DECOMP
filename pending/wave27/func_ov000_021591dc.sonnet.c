#include "ffc/types.h"

extern void *func_ov000_02159188(void *a, uint32_t x, uint32_t y, uint32_t z, void *w);
extern uint32_t func_ov000_02159164(void *p);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_ov000_021591a8(void *a, void *b, uint32_t n);

void *func_ov000_021591dc(void *a, void *b, uint32_t c, uint32_t d, uint32_t e) {
    void *r = func_ov000_02159188(a, d, e, d, a);
    if (r != 0 && b != 0) {
        uint32_t s = func_ov000_02159164(b);
        uint32_t n = s <= d ? s : d;
        func_02084ca4(b, r, n);
        func_ov000_021591a8(a, b, s);
    }
    return r;
}
