#include "ffc/types.h"

extern void func_02050bb0(void *p);
extern void func_0201d14c(uint32_t a, uint32_t b, void *c);
extern uint32_t data_020b93b8;

void func_ov003_021585d0(uint8_t *p) {
    uint16_t v;
    func_02050bb0(p + 0x80);
    v = *(uint16_t *)(p + 0xac);
    if (v != 0) {
        func_0201d14c(data_020b93b8, v, p + 0xd0);
    }
}
