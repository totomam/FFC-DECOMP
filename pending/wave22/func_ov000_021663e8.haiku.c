#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_02090380(void *destination, const void *source, uint32_t length);

uint32_t func_ov000_021663e8(uint8_t *dst, const uint8_t *src, uint32_t max) {
    uint32_t n = func_02092864(src);
    if (n > max - 1) {
        n = max - 1;
    }
    func_02090380(dst, src, n);
    dst[n] = 0;
    return n;
}
