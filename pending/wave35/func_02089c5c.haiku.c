#include "ffc/types.h"

extern void func_0208a324(int32_t idx);
extern void func_02089e14(int32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_02089c5c(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    int32_t i;
    uint32_t x = c;

    i = 0;
    for (; i < 8 && x != 0; i++, x >>= 1) {
        if (x & 1) {
            func_0208a324(i);
        }
    }
    func_02089e14(13, a, b, c, d);
}
