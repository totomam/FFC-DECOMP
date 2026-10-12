#include "ffc/types.h"

extern uint32_t data_021407c0[];
extern uint32_t data_02140e00;

extern uint16_t func_02088a2c();
extern void func_02084ca4(uint32_t a, uint32_t b, uint32_t c);
extern void func_0207cc74(void);
extern void func_02086dcc(void *a, void (*f)(void), uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_020870a0(void *object);
extern void func_0207cc8c(void);
extern void func_0207da1c(void);
extern void func_0207ca98(uint32_t value);
extern void func_0207da90(void);
extern void func_0207cd54(void);

void func_0207c9b8(void)
{
    uint8_t *b = (uint8_t *)data_021407c0;
    uint32_t r7;

    if (*(uint32_t *)(b + 4) != 0) {
        return;
    }
    *(uint32_t *)(b + 4) = 1;
    if (func_02088a2c(1) == 1) {
        func_02084ca4(0x2fffe00, 0x2fffa80, 0x16 << 4);
    }
    *(uint32_t *)(b + 0x4fc) = 0;
    *(uint32_t *)(b + 0x500) = 0;
    *(uint32_t *)(b + 0x504) = 0;
    *(uint32_t *)(b + 0x508) = (uint32_t)-1;
    *(uint32_t *)(b + 0x50c) = 0;
    *(uint32_t *)(b + 0x10) = 9 << 10;
    r7 = 0x4fc - 0xfc;
    *(uint32_t *)(b + 0xc) = r7;
    data_02140e00 = 0;
    *(uint32_t *)(b + 8) = 4;
    func_0207cc74();
    *(uint32_t *)(b + 0x4ec) = 0;
    *(uint32_t *)(b + 0x4f0) = 0;
    *(uint32_t *)(b + 0x4f8) = 0;
    *(uint32_t *)(b + 0x4f4) = 0;
    func_02086dcc(b + 0x28, func_0207cd54, 0, b + 0x4e8, r7, *(uint32_t *)(b + 8));
    func_020870a0(b + 0x28);
    func_0207cc8c();
    func_0207da1c();
    if (func_02088a2c() == 1) {
        func_0207ca98(1);
    }
    func_0207da90();
}
