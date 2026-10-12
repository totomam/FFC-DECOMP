#include "ffc/types.h"

extern void func_02007924(void *p);
extern void func_02007a0c(void *p, uint32_t a, uint32_t b);
extern uint32_t func_0200766c(void *p);
extern void func_02007564(void *p, uint32_t a, uint32_t b);
extern void func_020064ec(void *p, uint32_t a);

void func_020067a4(uint8_t *base)
{
    uint32_t off = 0x31d8;
    uint32_t zero;
    func_02007924(base + off);
    func_02007a0c(base + off, *(uint32_t *)(base + 0xc), 0);
    zero = 0;
    if (base[3] == 0) {
        base[3] = 1;
        *(uint32_t *)(base + 4) = func_0200766c(base + 0x2bb8);
        func_02007564(base + 0x2bb8, 1, 6);
        if (base[2] != 0) {
            func_020064ec(base, zero);
            base[2] = (uint8_t)zero;
        }
    }
}
