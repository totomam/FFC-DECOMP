#include "ffc/types.h"

extern void func_02057190(void *obj);
extern void func_0206056c(void *a, void *b);

void func_0206099c(void *a)
{
    uint8_t *p = (uint8_t *)a;
    if (*(int32_t *)(p + 0x48) == 1) {
        void *q = *(void **)(p + 0x44);
        if (*(int32_t *)((uint8_t *)q + 0x10) > 1) {
            uint32_t v = *(uint32_t *)(p + 0xc);
            *(uint32_t *)(p + 0xc) = (v & ~0xffu) | 2u;
        }
    }
    func_02057190(a);
    func_0206056c(*(void **)(p + 0x44), *(void **)(p + 0x34));
}
