#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern uint64_t func_0209a6d4(uint64_t first, uint64_t second);

uint32_t func_0207b8e8(uint32_t *p) {
    uint8_t *obj;
    uint64_t r;
    if (*(volatile uint32_t *)p == 0) {
        return 0;
    }
    obj = (uint8_t *)p[0];
    r = func_0209a71c((uint64_t)*(uint32_t *)(obj + 0x168), (uint64_t)1000);
    func_0209a6d4(r, (uint64_t)*(uint16_t *)(obj + 0xcc));
}
