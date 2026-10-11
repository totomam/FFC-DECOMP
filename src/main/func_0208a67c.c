#include "ffc/types.h"

extern void func_02089e64(uint8_t *base);
extern void func_02089e74(void);

uint32_t func_0208a67c(uint8_t *base, uint32_t idx) {
    uint32_t r;
    func_02089e64(base);
    r = *(uint32_t *)(base + (idx << 2) + 0x3c);
    if (r != 0) {
        if (r < 0x02000000) {
            r = (uint32_t)(base + r);
        }
    } else {
        r = 0;
    }
    func_02089e74();
    return r;
}
