#include "ffc/types.h"

extern void func_0201bffc(uint32_t a, uint16_t b, uint8_t c);
extern uint32_t data_020b93b8;

void func_ov003_02165e64(uint8_t *p) {
    func_0201bffc(data_020b93b8, *(uint16_t *)(p + 0x18), *(uint8_t *)(p + 0x1a));
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
}
