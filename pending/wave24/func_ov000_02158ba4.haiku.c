#include "ffc/types.h"

extern void func_ov000_021585a8(uint32_t *out, uint32_t x);
extern int func_ov000_021586b8(uint64_t *p, uint32_t x);

int func_ov000_02158ba4(uint64_t *p, uint32_t x) {
    uint32_t t[5];
    uint64_t *tp;
    func_ov000_021585a8(t, x);
    tp = (uint64_t *)&t[2];
    p[0] = p[1];
    p[1] = *tp;
    if (func_ov000_021586b8(p, x) == 0) {
        return 0;
    }
    return 1;
}
