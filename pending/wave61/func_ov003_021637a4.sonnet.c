#include "ffc/types.h"
extern void func_02056c9c(void *p, int x);
extern void func_020095b8(void *p, uint32_t x);
extern uint8_t data_ov003_0217a49c[];
void *func_ov003_021637a4(uint8_t *self, uint32_t a, uint32_t b, ...) {
    uint32_t *ap = &b;
    func_02056c9c(self, 0);
    *(void **)self = data_ov003_0217a49c;
    *(uint32_t *)(self + 0x88) = ap[0];
    *(uint32_t *)(self + 0x84) = a;
    *(uint32_t *)(self + 0x8c) = ap[1];
    func_020095b8(self + 0x90, ap[2]);
    *(uint32_t *)(self + 0x9c) = ap[3];
    return self;
}
