#include "ffc/types.h"

extern void func_0204a914(void *p);
extern void func_02086fbc(void *p);

void func_0204a8f0(uint8_t *p, uint8_t *q) {
    *(uint32_t *)(q + 0x18) = 1;
    func_0204a914(p);
    func_02086fbc(p + 0x2c);
}
