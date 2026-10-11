#include "ffc/types.h"

extern void func_ov005_02196fc4(uint32_t a, uint32_t b);
extern uint32_t func_ov008_021a253c(void *p, uint32_t i);
extern void func_ov005_02196bec(uint32_t a, uint32_t b);

void func_ov008_021a2450(void *p) {
    uint8_t i;
    func_ov005_02196fc4(*(uint32_t *)((uint8_t *)p + 0x11c), *(uint32_t *)((uint8_t *)p + 0x138));
    for (i = 0; i < 8; i++) {
        uint32_t r = func_ov008_021a253c(p, i);
        func_ov005_02196bec(*(uint32_t *)((uint8_t *)p + 0xdc + i * 4), r);
    }
}
