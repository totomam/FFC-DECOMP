#include "ffc/types.h"

extern void func_0208b220(void);
extern int32_t func_0208b5c0(void (*f)(void), int32_t *out);
extern void func_0208b1cc(void);
extern uint32_t data_020b2ba4;

int32_t func_0208b5f8(void) {
    int32_t v;
    int32_t r = func_0208b5c0(func_0208b220, &v);
    if (r == 0) {
        data_020b2ba4 = 0xc;
        func_0208b1cc();
        data_020b2ba4 = 2;
        r = v;
    }
    return r;
}
