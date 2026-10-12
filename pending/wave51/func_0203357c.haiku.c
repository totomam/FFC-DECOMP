#include "ffc/types.h"

extern uint8_t data_020ae1b8[];
extern void *data_020b8e44;
extern void func_02056c9c(void *p, uint32_t x);
extern void func_020095b8(void *p, uint32_t x);
extern uint32_t func_020159c8(void *p, uint32_t x);
extern void func_02005988(void *p, uint32_t x);

void *func_0203357c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t i;
    uint32_t *arr;

    func_02056c9c(p, 0);
    *(uint8_t **)p = data_020ae1b8;
    func_020095b8(p + 0x80, a);
    func_02005988(p + 0x8c, func_020159c8(data_020b8e44, 9));
    func_02005988(p + 0x98, func_020159c8(data_020b8e44, 8));
    arr = (uint32_t *)(p + 0xa4);
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    *(uint32_t *)(p + 0xb0) = b;
    *(uint32_t *)(p + 0xb4) = 0x80;
    *(uint32_t *)(p + 0xb8) = 0x60;
    *(uint8_t *)(p + 0xbc) = 0;
    *(uint32_t *)(p + 0xc0) = c;
    return p;
}
