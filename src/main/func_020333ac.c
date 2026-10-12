#include "ffc/types.h"

extern void func_02056c9c(void *self, void *b);
extern void func_020095b8(void *p, uint32_t x);
extern uint32_t func_020159c8(void *p, uint32_t x);
extern void func_02005988(void *p, uint32_t x);
extern char data_020ae1a0[];
extern void *data_020b8e44;

void *func_020333ac(void *self, void *b, uint32_t c, uint32_t d, uint32_t e) {
    uint8_t *p = (uint8_t *)self;
    func_02056c9c(self, b);
    *(void **)p = data_020ae1a0;
    func_020095b8(p + 0x80, c);
    func_02005988(p + 0x8c, func_020159c8(data_020b8e44, 9));
    func_02005988(p + 0x98, func_020159c8(data_020b8e44, 8));
    *(uint32_t *)(p + 0xa4) = d;
    *(uint32_t *)(p + 0xa8) = 0x80;
    *(uint32_t *)(p + 0xac) = 0x60;
    *(uint8_t *)(p + 0xb0) = 0;
    *(uint32_t *)(p + 0xb4) = e;
    return self;
}
