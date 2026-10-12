#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern uint16_t func_ov003_021481c0(uint16_t);
extern uint32_t func_ov003_021464f4(uint32_t, uint16_t);
extern void func_ov003_02164884(void *);
extern uint32_t *func_ov003_02155b40(uint32_t);
extern uint32_t func_ov003_02149588(uint32_t, uint16_t, uint32_t, uint32_t, uint16_t, uint32_t, uint16_t, uint16_t, uint32_t);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *);

void func_ov003_02164900(uint8_t *a0)
{
    uint32_t r4;
    uint32_t *r6;
    uint32_t res;

    r4 = func_020424e0(*(uint32_t *)(a0 + 0x80));
    *(uint16_t *)(a0 + 0x94) = func_ov003_021481c0(*(uint16_t *)(a0 + 0x94));
    r6 = (uint32_t *)func_ov003_021464f4(r4, *(uint16_t *)(a0 + 0x94));
    if (r6 == 0) {
        *(uint32_t *)(a0 + 0xc) = (*(uint32_t *)(a0 + 0xc) & ~0xffu) | 2u;
        return;
    }
    *(uint16_t *)(a0 + 0x84) = func_ov003_021481c0(*(uint16_t *)(a0 + 0x84));
    if (*(uint16_t *)(a0 + 0x84) != 0) {
        func_ov003_02164884(a0);
        r6 = func_ov003_02155b40((uint32_t)r6);
        {
            uint32_t s0 = *(uint16_t *)(a0 + 0x86);
            uint32_t s1 = *(uint32_t *)(a0 + 0x8c);
            uint32_t s2 = *(uint16_t *)(a0 + 0x88);
            uint32_t s3 = *(uint16_t *)(a0 + 0x8a);
            uint32_t s4 = *(uint32_t *)(a0 + 0x90);
            r6 += 2;
            res = func_ov003_02149588(r4, *(uint16_t *)(a0 + 0x84), r6[0], r6[1],
                                      (uint16_t)s0, s1, (uint16_t)s2, (uint16_t)s3, s4);
        }
        func_02056bc0(a0 + 0x14, (void *)res);
    }
    func_02056bc0(a0 + 0x14, func_02056aec(a0));
}
