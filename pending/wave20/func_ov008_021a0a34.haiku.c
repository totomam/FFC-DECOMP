#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_0201bcf4(uint32_t a, uint32_t b, uint32_t c);

void func_ov008_021a0a34(uint32_t unused, uint32_t p) {
    uint32_t r = func_0201c9ac(data_020b93b8, 0xe);
    uint32_t r2 = (p != r);
    func_0201bcf4(data_020b93b8, 0x1e, r2);
}
