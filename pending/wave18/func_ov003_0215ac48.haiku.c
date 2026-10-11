#include "ffc/types.h"

extern void func_ov003_02158264(void *p, uint32_t a, uint32_t b, uint32_t c);

void func_ov003_0215ac48(void *p) {
    uint8_t *b = (uint8_t *)p;
    *(uint32_t *)(b + 0xb4) = 0;
    *(uint32_t *)(b + 0xb8) = 0;
    *(uint32_t *)(b + 0x104) = 0;
    *(uint16_t *)(b + 0xbc) = 0;
    func_ov003_02158264(p, 0, 0, 0);
}
