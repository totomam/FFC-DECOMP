#include "ffc/types.h"

extern void func_02024f00(void *out, void *base, void *arg);

uint8_t func_02024eb0(uint8_t *p, uint32_t a, uint32_t b, uint32_t c) {
    uint32_t tmp[3];
    if (*(uint32_t *)(p + 0x194) == 0) {
        return *(uint8_t *)&a;
    }
    func_02024f00(tmp, p + 0x194, &a);
    if ((uint8_t *)tmp[0] == p + 0x198) {
        return ((uint8_t *)*(uint32_t *)(p + 0x19c))[12];
    }
    return ((uint8_t *)tmp[0])[13];
}
