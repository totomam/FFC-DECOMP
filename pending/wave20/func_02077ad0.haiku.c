#include "ffc/types.h"

extern void func_02077a88(void *p, void *b);

void func_02077ad0(void **p, char *b) {
    if (*p == 0) {
        func_02077a88(p, b);
        return;
    }
    uint16_t off = *(uint16_t *)((char *)p + 0xa);
    *(void **)(b + off) = 0;
    *(void **)(b + off + 4) = *p;
    *(void **)((char *)*p + *(uint16_t *)((char *)p + 0xa)) = b;
    *p = b;
    *(uint16_t *)((char *)p + 8) += 1;
}
