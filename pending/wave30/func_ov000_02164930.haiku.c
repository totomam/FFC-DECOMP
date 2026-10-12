#include "ffc/types.h"

extern void *func_ov000_02164418(void *a);
extern void *func_ov000_0215917c(uint32_t a, void *b);
extern void func_ov000_02159014(uint32_t a, uint32_t b);
extern void func_02084ca4(void *a, void *b, void *c);
extern void func_ov000_0215dc88(void *a, uint16_t b, void *c);
extern void func_ov000_021591a8(uint32_t a, void *b, uint32_t c);

void func_ov000_02164930(void *a, void *b, void *c)
{
    uint8_t *s;
    void *r4;
    uint16_t h;

    s = (uint8_t *)func_ov000_02164418(a);
    s[0x1d] = s[0x1e];
    h = *(uint16_t *)(s + 0x22);
    switch (h) {
    case 2:
    case 3:
    case 4:
        r4 = func_ov000_0215917c(4, c);
        if (r4 == 0) {
            func_ov000_02159014(9, 0xfffe8517);
            return;
        }
        func_02084ca4(b, r4, c);
        func_ov000_0215dc88(a, *(uint16_t *)(s + 0x22), r4);
        func_ov000_021591a8(4, r4, 0);
        break;
    }
}
