#include "ffc/types.h"

extern int func_0206cb98(void *p);
extern void func_ov013_021c29e8(void *p);
extern void func_020559d4(void *p);

void func_ov013_021c2f9c(uint8_t *self)
{
    if (func_0206cb98(*(void **)(self + 0xf4)) != 0) {
        uint32_t *q = *(uint32_t **)(self + 0xf8);
        *q = 1;
        func_ov013_021c29e8(self);
    } else {
        func_020559d4(self + 0xb8);
    }
}
