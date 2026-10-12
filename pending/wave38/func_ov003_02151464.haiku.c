#include "ffc/types.h"

extern uint32_t func_0204f7d4(const void *object);
extern void func_02056c9c(void *self, void *arg);
extern void *data_0213df18;
extern char data_ov003_02179cd4[];

void *func_ov003_02151464(void *self, uint32_t a, uint32_t b)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *s;
    uint32_t r;

    r = func_0204f7d4(data_0213df18);
    func_02056c9c(self, (void *)r);
    *(void **)(p + 0) = data_ov003_02179cd4;
    s = p + 0x14;
    *(uint32_t *)(p + 0x80) = 0;
    *(uint32_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x94) = a;
    *(uint32_t *)(p + 0x98) = 0;
    *(uint32_t *)(p + 0x9c) = b;
    *(uint32_t *)(p + 0xa0) = 0;
    s[0x12] = (uint8_t)((s[0x12] & ~0xffu) | 1u);
    s = p + 0x48;
    s[0x12] = (uint8_t)((s[0x12] & ~0xffu) | 1u);
    return self;
}
