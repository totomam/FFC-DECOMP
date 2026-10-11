#include "ffc/types.h"

extern void func_02022bec(void *p, uint32_t v);

void func_02022fdc(uint32_t *p, uint32_t a, uint32_t b, uint32_t c) {
    p[0x85] = a;
    p[0x86] = b;
    if (c != 0) {
        func_02022bec(p, p[0x8e]);
    }
}
