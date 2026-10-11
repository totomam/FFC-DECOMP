#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);

uint16_t func_ov003_02154fc4(uint8_t *p) {
    uint16_t r = 1;
    uint32_t n = *(uint32_t *)(p + 0x44);
    if (n != 0) {
        uint32_t idx = func_0201c9ac(data_020b93b8, 0x4c);
        if (idx < *(uint32_t *)(p + 0x3c)) {
            uint32_t off = *(uint32_t *)(p + 0x48);
            r = *(uint16_t *)(p + off + idx * 2);
        } else {
            r = *(uint16_t *)(p + *(uint32_t *)(p + 0x48));
        }
    }
    return r;
}
