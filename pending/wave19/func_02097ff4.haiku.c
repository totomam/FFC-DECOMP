#include "ffc/types.h"

extern uint8_t data_020b33d0[];
extern uint8_t data_020b33e4[];
extern void func_0209724c(uint8_t *p);

uint8_t *func_02097ff4(uint8_t *p) {
    uint32_t q = (uint32_t)data_020b33d0;
    uint8_t *r4;
    *(uint32_t *)p = q;
    *(uint32_t *)(p + 4) = 0;
    *(uint32_t *)(p + 8) = (uint32_t)data_020b33e4;
    q -= 0xc;
    r4 = p + *(int32_t *)q;
    func_0209724c(r4);
    *(uint32_t *)(r4 + 0x30) = 0;
    *(uint16_t *)(r4 + 0x34) = 0x20;
    return p;
}
