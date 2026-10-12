#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov008_0219a238(void *p);
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov008_0219a290(void *p);
extern void func_02069828(void *p, uint32_t a, uint32_t b);

typedef struct S {
    uint8_t pad0[0xc4];
    uint32_t c4;
    uint8_t pad1[0xe0 - 0xc8];
    uint32_t e0;
    uint8_t pad2[4];
    uint32_t **e8;
    uint8_t pad3[0x140 - 0xec];
    uint8_t b140;
    uint8_t b141;
    uint8_t pad4[0x14c - 0x142];
    uint32_t c14c;
} S;

int func_ov008_0219a1cc(S *p)
{
    uint32_t buf[2];
    uint64_t r;
    r = func_0209a76c(p->b140 + p->b141, p->b141 + 1);
    p->b140 = (uint8_t)(r >> 32);
    func_ov008_0219a238(p);
    func_ov005_02196144(p->e0, (uint8_t)(p->b140 + 1));
    func_ov008_0219a290(p);
    if (p->c14c != p->c4) {
        void (*fn)(uint32_t *, void *) = (void (*)(uint32_t *, void *))(*p->e8)[4];
        fn(buf, p->e8);
        func_02069828(p, buf[0], buf[1]);
    }
    return 1;
}
