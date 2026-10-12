#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov001_02186e4c(void *a, void *p, uint32_t b, uint32_t c, uint32_t d, uint32_t e, void (*f)(void), void *g);
extern void func_ov001_021858f0(void *a, uint32_t b, uint32_t c, uint32_t d, void (*e)(void), void *f);
extern void func_ov001_021863fc(void);
extern void func_ov001_02186530(void);


void *func_ov001_021865a0(void *p, uint32_t a1, uint32_t a2, uint32_t a3,
                          uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4)
{
    uint8_t *r4;

    if (s2 == 0) {
        if (*(uint32_t *)0x0217098c != 1) {
            return 0;
        }
    }
    r4 = (uint8_t *)func_ov000_021653d4(0x858);
    if (r4 == 0) {
        return 0;
    }
    *(uint32_t *)(r4 + 0x84c) = s3;
    *(uint32_t *)(r4 + 0x850) = 0;
    *(uint32_t *)(r4 + 0x854) = s4;
    *(uint32_t *)(r4 + 0x840) = 0;
    func_ov001_02186e4c(r4 + 0x60, p, a1, a2, a3, s2, func_ov001_021863fc, r4);
    func_ov001_021858f0(r4, s0, s1, s2, func_ov001_02186530, r4);
    return r4;
}
