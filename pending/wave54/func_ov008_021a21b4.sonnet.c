#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_02021338(uint32_t x);
extern uint32_t func_ov008_021a27ec(uint8_t *p, uint32_t i);
extern uint32_t func_0201e9bc(void *x);
extern void func_0201c220(void *a, uint32_t b, uint32_t c);
extern uint32_t func_0201e9d0(void *a);
extern void func_0201e92c(void *a, uint32_t b, void *c);
extern void func_0201f03c(void *a, uint32_t b);
extern void func_ov008_021a1f58(uint8_t *p);
extern void func_ov008_021a25cc(uint8_t *p);
extern void func_ov008_021a2614(uint8_t *p);
extern void func_ov005_02197000(uint32_t x);
extern void func_ov008_021a2450(uint8_t *p);
extern void func_02056c4c(void *x);
extern void func_ov008_021a22d8(uint8_t *p);

void func_ov008_021a21b4(uint8_t *p)
{
    uint8_t i;

    if (*(uint32_t *)(p + 0x140) == 1) {
        func_02021338(0x116);
        for (i = 0; i < *(uint32_t *)(p + 0x108); i++) {
            if ((1u << (i & 31)) & (*(uint32_t **)(p + 0x124))[(uint32_t)i >> 5]) {
                uint32_t n;
                (*(uint32_t **)(p + 0x124))[(uint32_t)i >> 5] &= ~(1u << (i & 31));
                n = func_ov008_021a27ec(p, i);
                if (func_0201e9bc(data_020b93b8) == 0 &&
                    n <= *(uint32_t *)(p + 0x134)) {
                    *(uint32_t *)(p + 0x134) -= n;
                    func_0201c220(data_020b93b8, 4, *(uint32_t *)(p + 0x134));
                    func_0201e92c(data_020b93b8,
                                  func_0201e9d0(data_020b93b8),
                                  (uint8_t *)*(uint32_t **)(p + 0x104) + i * 0x18);
                }
            }
        }

        *(uint8_t *)(p + 0x13c) = 0;
        *(uint32_t *)(p + 0x138) = 0;
        func_0201f03c(data_020b93b8, *(uint8_t *)(p + 0x144));
        func_ov008_021a1f58(p);
        func_ov008_021a25cc(p);
        func_ov008_021a2614(p);
        func_ov005_02197000(*(uint32_t *)(p + 0x11c));
        func_ov008_021a2450(p);
        {
            uint8_t *obj = *(uint8_t **)(p + 0xd4);
            void *x;
            void **vt;
            func_02056c4c(obj + 0x14);
            x = *(void **)(obj + 0x98);
            vt = *(void ***)x;
            ((void (*)(void *, uint32_t, uint32_t))vt[14])(x, 1, 0);
        }
        func_ov008_021a22d8(p);
    }
}
