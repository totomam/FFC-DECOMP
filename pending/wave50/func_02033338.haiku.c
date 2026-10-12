#include "ffc/types.h"

extern void func_02056c9c(void *self, int x);
extern void func_020095b8(void *self, void *x);
extern void *func_020159c8(void *base, int idx);
extern void func_02005988(void *self, void *x);
extern char data_020ae1a0[];
extern void *data_020b8e44;

void *func_02033338(void *p, void *a1, uint32_t a2, uint32_t a3) {
    uint8_t *s = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(void **)s = data_020ae1a0;
    func_020095b8(s + 0x80, a1);
    func_02005988(s + 0x8c, func_020159c8(data_020b8e44, 9));
    func_02005988(s + 0x98, func_020159c8(data_020b8e44, 8));
    *(uint32_t *)(s + 0xa4) = a2;
    *(uint32_t *)(s + 0xa8) = 0x80;
    *(uint32_t *)(s + 0xac) = 0x60;
    *(uint8_t *)(s + 0xb0) = 0;
    *(uint32_t *)(s + 0xb4) = a3;
    return p;
}
