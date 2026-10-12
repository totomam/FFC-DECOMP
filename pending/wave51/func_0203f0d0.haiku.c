#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern uint32_t func_ov003_021463f8(uint32_t, uint32_t, uint32_t);
extern void func_0201f960(uint32_t, uint32_t, uint8_t *);
extern void func_02084b2c(uint8_t *, uint32_t, uint32_t);
extern void func_0201f918(uint32_t, uint32_t, uint8_t *);
extern uint32_t func_ov003_02146494(void);
extern uint32_t func_ov003_021464f4(uint32_t, uint32_t);
extern uint32_t data_020b93b8;
extern uint32_t data_020aef78[2];

void func_0203f0d0(uint8_t *p)
{
    uint8_t buf[0x2c];
    uint32_t r4;
    uint32_t v;
    uint32_t a, b;

    func_ov003_021463f8(func_020424e0(*(uint32_t *)(p + 0x88)), 1, 0);
    func_0201f960(data_020b93b8, *(uint32_t *)(p + 0x8c), p + 0x90);
    func_02084b2c(buf, 0, 0x2c);
    func_0201f918(data_020b93b8, *(uint32_t *)(p + 0x8c), buf);
    func_020424e0(*(uint32_t *)(p + 0x88));
    r4 = func_ov003_02146494();
    v = func_020424e0(*(uint32_t *)(p + 0x88));
    v = func_ov003_021464f4(v, *(uint32_t *)((uint8_t *)r4 + 0xb0));
    *(uint32_t *)(p + 0xc0) = v;
    a = data_020aef78[0];
    b = data_020aef78[1];
    *(uint32_t *)(p + 0x80) = b;
    *(uint32_t *)(p + 0x84) = a;
}
