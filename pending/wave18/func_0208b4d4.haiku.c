#include "ffc/types.h"

extern uint32_t func_0208b4a4(uint32_t a, uint32_t b, uint32_t c, void *fn, uint32_t *out);
extern void func_0208b1cc(void);
extern void func_0208b220(void);

uint32_t func_0208b4d4(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t out;
    uint32_t r;
    r = func_0208b4a4(a, b, c, (void *)func_0208b220, &out);
    if (r == 0) {
        func_0208b1cc();
        r = out;
    }
    return r;
}
