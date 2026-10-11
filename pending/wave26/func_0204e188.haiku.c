#include "ffc/types.h"

extern uint32_t func_0204de50(uint32_t a);
extern uint32_t func_0204de80(uint32_t a);
extern uint32_t func_0204dc74(uint32_t a, uint32_t b);
extern uint32_t func_0204dc48(uint32_t a);

uint32_t func_0204e188(uint32_t a) {
    uint32_t r = func_0204de80(func_0204de50(a));
    uint32_t ok = func_0204dc74(r, a);
    if (ok != 0) {
        uint32_t p = func_0204dc48(r);
        if (p != 0) {
            return *(uint32_t *)(p + 0x438);
        }
        return 0;
    }
    return 0;
}
