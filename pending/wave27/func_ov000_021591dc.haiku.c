#include "ffc/types.h"

extern void *func_ov000_02159188(void *a, uint32_t x, uint32_t y, uint32_t z, void *w);
extern uint32_t func_ov000_02159164(void *p);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_ov000_021591a8(void *a, void *b, uint32_t n);

void *func_ov000_021591dc(void *a, void *b, uint32_t c, uint32_t d, uint32_t e) {
    void *r7;
    uint32_t r4;
    uint32_t n;

    r7 = func_ov000_02159188(a, d, e, d, a);
    if (r7 != 0) {
        if (b != 0) {
            r4 = func_ov000_02159164(b);
            n = d;
            if (r4 <= d) {
                n = r4;
            }
            func_02084ca4(b, r7, n);
            func_ov000_021591a8(a, b, r4);
        }
        return r7;
    }
    return 0;
}
