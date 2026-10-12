#include "ffc/types.h"

extern uint32_t func_ov000_02154e4c(void *p);
extern uint32_t func_ov000_02154e10(void *p);
extern uint64_t func_ov000_02154de4(void *p);
extern uint32_t func_ov000_02154dfc(void *p);
extern uint64_t func_ov000_02154e00(void *p);

uint32_t func_ov000_021554a8(void *a, void *b)
{
    uint32_t t1 = func_ov000_02154e4c(a);
    uint32_t t2 = func_ov000_02154e4c(b);
    if (t1 != t2) {
        return 0;
    }
    if (t1 == 3) {
        uint32_t v1 = func_ov000_02154e10(a);
        uint32_t v2 = func_ov000_02154e10(b);
        if (v1 == v2) {
            return 1;
        }
        return 0;
    }
    if (t1 == 1) {
        uint64_t x = func_ov000_02154de4(a);
        uint64_t y = func_ov000_02154de4(b);
        if (x == y) {
            uint32_t u = func_ov000_02154dfc(a);
            uint32_t w = func_ov000_02154dfc(b);
            if (u == w) {
                return 1;
            }
        }
        return 0;
    }
    if (t1 == 2) {
        uint64_t x = func_ov000_02154e00(a);
        uint64_t y = func_ov000_02154e00(b);
        if (x == y) {
            return 1;
        }
        return 0;
    }
    return 0;
}
