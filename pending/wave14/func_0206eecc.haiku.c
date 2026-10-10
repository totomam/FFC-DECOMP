#include "ffc/types.h"

extern uint32_t data_0213e178;
extern void func_0206ce14(uint32_t a, uint16_t b);

void func_0206eecc(void *p) {
    uint8_t *s = (uint8_t *)p;
    func_0206ce14(data_0213e178, *(uint16_t *)(s + 0x14));
    *(uint32_t *)(s + 0xc) = (*(uint32_t *)(s + 0xc) & ~0xffu) | 2u;
}
