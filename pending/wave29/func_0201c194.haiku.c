#include "ffc/types.h"

extern int32_t func_0201c188(void *a, uint32_t b);
extern void func_0201c178(void *a, uint32_t b, uint32_t c);

uint32_t func_0201c194(void *p) {
    uint32_t i;
    for (i = 1; i < 512; i++) {
        if (func_0201c188(p, i) == 0) {
            func_0201c178(p, i, 1);
            return i;
        }
    }
    return 0;
}
