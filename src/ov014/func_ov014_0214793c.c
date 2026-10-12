#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201b904(uint32_t);
extern uint32_t func_0209a978(uint32_t, uint32_t);
extern void func_02087890(uint32_t, uint32_t);
extern void func_02089ce0(uint32_t, uint32_t);
extern void func_02089d40(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_02089c9c(uint32_t, uint32_t, uint32_t, void (*)(void), uint8_t *);
extern void func_02089c40(uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_0208a030(uint32_t);
extern void func_ov014_02146ea4(void);

void func_ov014_0214793c(uint8_t *p, uint32_t a1, uint32_t a2)
{
    uint32_t sp1c, sp18, r7, m, flags, mask;

    uint32_t t = func_0201b904(data_020b93b8);
    r7 = func_0209a978(t * 0x7f, 10);
    sp1c = func_0209a978(0xffb0ff, a1);
    sp18 = (a2 >> 6) * (sp1c << 1);

    func_02087890(*(uint32_t *)(p + 0x48), (*(uint32_t *)(p + 0x54) * a2) << 1);
    flags = *(uint32_t *)(p + 0x80);
    if (!(flags & 1)) {
        func_02087890(*(uint32_t *)(p + 0x4c), (*(uint32_t *)(p + 0x54) * a2) << 1);
    }

    func_02089ce0(*(uint32_t *)(p + 0x84), 0);

    mask = 0;
    if (*(uint32_t *)(p + 0x80) & 1) {
        mask = 0x40;
    }

    m = (*(uint32_t *)(p + 0x54) * a2) >> 1;
    func_02089d40(0, 1, *(uint32_t *)(p + 0x48), 1, 0, m, r7, 0, sp1c, mask);

    flags = *(uint32_t *)(p + 0x80);
    if (!(flags & 1)) {
        m = (*(uint32_t *)(p + 0x54) * a2) >> 1;
        func_02089d40(1, 1, *(uint32_t *)(p + 0x4c), 1, 0, m, r7, 0, sp1c, 0x7f);
    }

    func_02089c9c(0, sp18, sp18, func_ov014_02146ea4, p + 0x38);
    func_02089c40(*(uint32_t *)(p + 0x84), 0, 1, 0);
    func_0208a030(1);
}
