#include "ffc/types.h"

extern int32_t func_ov000_02147a14(uint32_t *out, void *src);
extern void func_02084ca4(int32_t a, uint8_t *dst, uint32_t n);
extern void func_ov000_02147ab0(uint32_t n, void *src);

int32_t func_ov000_0214ac30(uint8_t *dst, int32_t n, void *src) {
    uint32_t chunk;
    int32_t r;
    do {
        r = func_ov000_02147a14(&chunk, src);
        if (chunk == 0) {
            return -1;
        }
        if (chunk > (uint32_t)n) {
            chunk = n;
        }
        func_02084ca4(r, dst, chunk);
        func_ov000_02147ab0(chunk, src);
        n -= chunk;
        dst += chunk;
    } while (n > 0);
    return 0;
}
