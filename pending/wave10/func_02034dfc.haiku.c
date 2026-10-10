#include "ffc/types.h"

void func_02034dfc(uint8_t *p) {
    uint32_t i;
    for (i = 0; i < *(uint32_t *)(p + 0xe0); i++) {
        void **obj = *(void ***)(p + 0x8c + i * 4);
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[10])(obj);
    }
}
