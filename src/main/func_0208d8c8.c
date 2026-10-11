#include "ffc/types.h"

extern uint32_t func_0208cf0c(void *p);
extern void func_0208cdd8(uint32_t a, void *p);
extern uint32_t func_0208ce30(uint32_t a, uint32_t b);

uint32_t func_0208d8c8(void *p) {
    uint32_t r = func_0208cf0c(p);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(1, p);
    r = func_0208ce30(1, 0);
    if (r != 0) {
        return r;
    }
    return 2;
}
