#include "ffc/types.h"

extern void func_ov001_02181ddc(void *p);

uint32_t func_ov001_0217fe8c(uint8_t *p)
{
    void (*f)(void *);
    int32_t c;

    if (p == 0) {
        return 1;
    }
    f = *(void (**)(void *))(p + 0x24);
    if (f == 0) {
        return 1;
    }
    *(int32_t *)(p + 0x1c) += 1;
    f(p);
    c = *(int32_t *)(p + 0x1c) - 1;
    *(int32_t *)(p + 0x1c) = c;
    if (*(void **)(p + 0x14) != 0 && c == 0) {
        func_ov001_02181ddc(p);
        return 0;
    }
    return 1;
}
