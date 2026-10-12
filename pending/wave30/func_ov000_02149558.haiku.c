#include "ffc/types.h"

extern int func_ov000_021495ac(void *a, void *b);
extern void func_02084ca4(void *src, void *dst, uint32_t n);

int func_ov000_02149558(void *a, void *b) {
    uint32_t x;
    uint32_t y;
    if (!func_ov000_021495ac(a, b)) {
        return 0;
    }
    func_02084ca4(a, &x, 4);
    func_02084ca4(b, &y, 4);
    if ((x | y) == 0xFFFFFFFEu) {
        return 0;
    }
    if (~y & x) {
        return 1;
    }
    return 0;
}
