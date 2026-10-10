#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0205e3e0(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e);

void func_0203bbd8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e) {
    void *p = func_0205681c(0x70);
    if (p != 0) {
        func_0205e3e0(p, a, b, c, d, e);
    }
}
