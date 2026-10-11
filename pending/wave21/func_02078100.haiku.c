#include "ffc/types.h"

extern void func_02078030(uint8_t *p, uint32_t n, int32_t v);
extern void func_02078070(uint8_t *p, uint32_t n, int32_t v);

void func_02078100(uint8_t *p, uint32_t n, int32_t v) {
    uint8_t *q = p + 0x24;
    if (n == 0) {
        n = 1;
    }
    n = (n + 3) & ~3u;
    if (v >= 0) {
        func_02078030(q, n, v);
        return;
    }
    func_02078070(q, n, -v);
}
