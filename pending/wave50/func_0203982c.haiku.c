#include "ffc/types.h"

extern void func_020396c4(void *a, uint32_t b);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(void *a, uint32_t b, uint32_t c);
extern char data_020ae9c0[];
extern void *data_020b93b8;

void *func_0203982c(void *self, uint32_t arg) {
    uint8_t *p = (uint8_t *)self;
    uint32_t v;
    func_020396c4(self, arg);
    *(char **)p = data_020ae9c0;
    *(uint32_t *)(p + 0x88) = arg;
    *(uint32_t *)(p + 0x8c) = 0;
    *(uint32_t *)(p + 0x90) = 0;
    *(uint8_t *)(p + 0x94) = 0;
    *(uint8_t *)(p + 0x95) = 0;
    *(uint8_t *)(p + 0x96) = 0;
    *(uint8_t *)(p + 0x97) = 0;
    *(uint8_t *)(p + 0x98) = 0;
    *(uint32_t *)(p + 0x9c) = 0;
    *(uint32_t *)(p + 0xa0) = 0;
    *(uint32_t *)(p + 0xa4) = 2;
    *(uint32_t *)(p + 0xa8) = 2 - 3;
    *(uint32_t *)(p + 0xac) = 2 - 3;
    v = func_0201b924(data_020b93b8);
    func_0201f1f0(data_020b93b8, v, *(uint32_t *)(p + 0x88) + 0x10);
    return self;
}
