/* cflags: -nothumb */
#include "ffc/types.h"
extern void func_020800cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
void func_02080648(uint32_t *p, uint32_t *q, uint32_t c, uint32_t d, uint32_t e) {
    uint32_t x, y, z;
    func_020800cc((uint32_t)p, (uint32_t)q, c, d, e);
    x = p[9]; y = p[10]; z = p[11];
    q[9] = x; q[10] = y; q[11] = z;
}
