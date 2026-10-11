#include "ffc/types.h"

extern int func_0204dc74(void *a);

void func_0204ddac(void *a, void *p) {
    void (*fn)(void *, int, int);
    if (func_0204dc74(a) == 0) {
        return;
    }
    fn = *(void (**)(void *, int, int))((uint8_t *)p + 0x1c);
    if (fn != 0) {
        fn(p, 4, 0);
    }
}
