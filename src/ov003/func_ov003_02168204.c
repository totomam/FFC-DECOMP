#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint32_t func_0203b720(void);
extern uint32_t func_ov003_0214d454(uint32_t x);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_0201cf34(uint32_t data, void *out);
extern void func_0201ce70(uint32_t data, void *in);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_ov003_021523a4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t data_020b93b8;

void func_ov003_02168204(char *self)
{
    uint32_t buf[0x26];
    uint32_t r4 = func_020424e0(*(uint32_t *)(self + 0x80));
    uint32_t r2 = *(uint32_t *)(self + 0x8c);
    *(uint32_t *)(self + 0x8c) = *(uint32_t *)(self + 0x8c) + 1;
    switch (r2) {
    case 0: {
        uint32_t r6 = func_0203b720();
        uint32_t r1 = func_ov003_0214d454(r4);
        char *p = self + 0x14;
        func_02056bc0(p, r1);
        func_02056bc0(p, r6);
        break;
    }
    case 1: {
        uint32_t r6, r1, r7, r0;
        char *p;
        func_0201cf34(data_020b93b8, buf);
        r1 = *(uint32_t *)(self + 0x84);
        r6 = (buf[7] << 24) >> 31;
        if (r6 == r1) {
            uint32_t v = *(uint32_t *)(self + 0xc);
            *(uint32_t *)(self + 0xc) = (v & ~0xffu) | 2;
            return;
        }
        buf[7] = (buf[7] & ~0x80u) | ((r1 & 1) << 7);
        func_0201ce70(data_020b93b8, buf);
        r7 = func_02056aec(self);
        r0 = func_ov003_021523a4(*(uint32_t *)(r4 + 0x184), r6,
                                 *(uint32_t *)(self + 0x84),
                                 *(uint32_t *)(self + 0x88));
        p = self + 0x14;
        func_02056bc0(p, r0);
        func_02056bc0(p, r7);
        break;
    }
    default:
        break;
    }
}
