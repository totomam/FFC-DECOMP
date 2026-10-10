#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0205de20(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e);

void func_0203bcb4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e) {
    void *p = func_0205681c(0x6c);
    if (p != 0) {
        func_0205de20(p, a, b, c, d, e);
    }
}
