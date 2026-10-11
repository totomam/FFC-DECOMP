#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern uint32_t func_0205681c(uint32_t arg);
extern uint32_t func_ov010_021bdad0(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);

void func_0203a208(uint8_t *p) {
    uint32_t r;
    func_020375f4(0x31 << 6);
    r = func_0205681c(0x5b << 2);
    if (r != 0) {
        r = func_ov010_021bdad0(r, *(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x8c));
    }
    func_02056bc0(p + 0x14, (void *)r);
}
