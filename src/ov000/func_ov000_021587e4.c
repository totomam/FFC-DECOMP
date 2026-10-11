#include "ffc/types.h"

extern int func_ov000_02158824(void *a, void *b);
extern void func_02084ca4(void *src, void *dst, uint32_t n);

int func_ov000_021587e4(void *a, void *b)
{
    uint32_t y;
    uint32_t x;

    if (!func_ov000_02158824(a, b)) {
        return 0;
    }
    func_02084ca4(a, &y, 4);
    func_02084ca4(b, &x, 4);
    if (y & ~x) {
        return 1;
    }
    return 0;
}
