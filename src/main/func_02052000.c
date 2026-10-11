#include "ffc/types.h"

extern void func_020095b8(void *a, void *b);
extern uint32_t func_02051bc0(void *a, void *b);
extern void *func_020059cc(void *object);

uint32_t func_02052000(void *p) {
    uint32_t x[2];
    uint32_t y[3];
    uint32_t r;
    func_020095b8(y, p);
    r = func_02051bc0(y, x);
    func_020059cc(y);
    return r;
}
