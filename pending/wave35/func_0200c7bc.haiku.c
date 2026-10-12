#include "ffc/types.h"

extern void func_02021338(uint32_t);
extern void func_02068580(uint32_t, uint32_t);
extern void func_02068658(uint32_t);
extern void func_02034d04(void);
extern void func_02034d2c(uint32_t);
extern void func_02034e54(uint32_t);

void func_0200c7bc(uint8_t *p)
{
    uint32_t *q;
    func_02021338(0xd9);
    func_02068580(*(uint32_t *)(p + 0x94), *(uint32_t *)(p + 0xd0));
    func_02068658(*(uint32_t *)(p + 0x94));
    q = *(uint32_t **)(p + 0x94);
    q[3] &= ~0xffu;
    if (*(uint32_t *)(p + 0x90) != 0) {
        func_02034d04();
        func_02034d2c(*(uint32_t *)(p + 0x90));
        func_02034e54(*(uint32_t *)(p + 0x90));
    }
}
