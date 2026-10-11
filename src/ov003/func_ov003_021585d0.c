#include "ffc/types.h"

extern void func_02050bb0(uint8_t *p);
extern void func_0201d14c(uint32_t a, uint16_t b, uint8_t *c);
extern uint32_t data_020b93b8;

void func_ov003_021585d0(uint8_t *p) {
    func_02050bb0(p + 0x80);
    if (*(uint16_t *)(p + 0xac) != 0) {
        func_0201d14c(data_020b93b8, *(uint16_t *)(p + 0xac), p + 0xd0);
    }
}
