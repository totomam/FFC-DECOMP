#include "ffc/types.h"

extern void func_0201c210(void *a, uint32_t b, uint32_t c);
extern void func_0201c220(void *a, uint32_t b, uint32_t c);

void func_0201c1d0(void *a, int mode, uint32_t x, uint32_t y) {
    if (mode != 1) {
        if (mode == 2) {
            func_0201c210(a, x, y);
        }
    } else {
        func_0201c220(a, x, y);
    }
}
