#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

uint32_t func_0202eba4(uint8_t *p) {
    uint32_t v;
    func_0208763c(p + 0x4b8);
    v = *(uint32_t *)(p + 0x4b8 + 0x30);
    func_02087678(p + 0x4b8);
    return v;
}
