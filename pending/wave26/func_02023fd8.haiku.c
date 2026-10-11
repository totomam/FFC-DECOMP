#include "ffc/types.h"

extern void func_02024010(void *a, void *b, int c);

void *func_02023fd8(uint8_t *p) {
    void *o = *(void **)(p + 0x2e0);
    if (o) {
        void (*f)(void *) = *(void (**)(void *))(*(uint32_t *)o);
        f(o);
    }
    if (*(p + 0x34) == 0) {
        func_02024010(p, p + 0x60, 0);
        *(p + 0x34) = 1;
    }
    return p + 0x60;
}
