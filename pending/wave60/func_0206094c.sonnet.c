#include "ffc/types.h"
extern void func_0205729c(void *p);
extern void func_02060564(void *a, uint32_t b, uint32_t c);
void func_0206094c(uint8_t *p) {
    if (*(int *)(p + 0x58) == 1) {
        if (*(int *)(*(uint8_t **)(p + 0x54) + 0x10) > 0) {
            *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        }
    }
    func_0205729c(p);
    func_02060564(*(void **)(p + 0x54), *(uint32_t *)(p + 0x34), *(uint32_t *)(p + 0x38));
}
