#include "ffc/types.h"

typedef void (*vfn_t)(void *);

void func_ov005_02195bf0(void *self)
{
    char *s = (char *)self;
    void *a = *(void **)(s + 0x24);
    if (!(int8_t)*(uint32_t *)((char *)a + 0xc)) {
        ((vfn_t *)*(void **)a)[2](a);
    }
    if (*(uint32_t *)(s + 0x44) != 2) {
        void *b = *(void **)(s + 0x28);
        if (!(int8_t)*(uint32_t *)((char *)b + 0xc)) {
            ((vfn_t *)*(void **)b)[2](b);
        }
    }
    if (*(uint32_t *)(s + 0x44) == 1 && *(uint8_t *)(s + 0x3c) == 2) {
        uint32_t n = *(uint32_t *)(s + 0x40);
        *(uint32_t *)(s + 0x40) = n + 1;
        if (n > 0x78) {
            void *b = *(void **)(s + 0x28);
            ((vfn_t *)*(void **)b)[11](b);
        }
    }
}
