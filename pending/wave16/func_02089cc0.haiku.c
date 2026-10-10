#include "ffc/types.h"

extern void func_02089e14(uint32_t a, void *b, void *c, uint32_t d, uint32_t e);

void func_02089cc0(void *p0, void *p1, uint32_t p2) {
    uint32_t f = 3;
    if (p2 == 0) {
        f = 0;
    }
    func_02089e14(8, p0, p1, f, 0);
}
