#include "ffc/types.h"

extern uint32_t func_02073898(uint32_t v);
extern void func_02074a7c(uint32_t v);
extern uint32_t func_02073588(uint32_t v, uint32_t flags, void (*cb)(void));
extern void func_02056bc0(uint8_t *object, uint32_t node);
extern void func_02074e3c(void);
extern uint32_t data_020b26e8[2];

void func_020755a0(uint8_t *self)
{
    uint32_t r;
    if (func_02073898(*(uint32_t *)(*(uint8_t **)(self + 0x80) + 0x2c)) == 0) {
        uint32_t v = *(uint32_t *)(self + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)(self + 0xc) = v;
        return;
    }
    func_02074a7c(*(uint32_t *)(self + 0x80));
    r = func_02073588(*(uint32_t *)(*(uint8_t **)(self + 0x80) + 0x2c), 0x1000, func_02074e3c);
    func_02056bc0(self + 0x14, r);
    uint32_t *d = data_020b26e8;
    uint32_t a = d[0];
    uint32_t b = d[1];
    *(uint32_t *)(self + 0x84) = a;
    *(uint32_t *)(self + 0x88) = b;
}
