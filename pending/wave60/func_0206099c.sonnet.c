#include "ffc/types.h"
extern void func_02057190(void *p);
extern void func_0206056c(void *a, uint32_t b);
void func_0206099c(uint8_t *p) {
    if (*(int32_t *)(p + 0x48) == 1 && *(int32_t *)(*(uint8_t **)(p + 0x44) + 0x10) > 1) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
    func_02057190(p);
    func_0206056c(*(void **)(p + 0x44), *(uint32_t *)(p + 0x34));
}
