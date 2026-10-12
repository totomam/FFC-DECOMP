#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern void func_ov000_0215133c(uint32_t a, uint32_t b, uint32_t c);
extern void func_02087874(uint32_t a, uint32_t b);
extern int func_0208da6c(void *fn, void *ctx);
extern void func_ov000_0214fbe4(int x);
extern int func_ov000_02150bc8(void);

int func_ov000_021506a4(uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *p;
    int r;
    uint8_t st;

    p = func_ov000_0214fa54();
    st = p[0x12de];
    switch (st) {
    case 5:
        func_ov000_0215133c(a, b, c);
        return 2;
    case 6:
        func_ov000_0215133c(a, b, c);
        return 0;
    default:
        return 1;
    case 3:
        func_ov000_0215133c(a, b, c);
        func_02087874(*(uint32_t *)(p + 0x22a0), *(uint16_t *)(p + 0x22a4));
        *(uint32_t *)(p + 0x22e4) = *(uint32_t *)(p + 0x22e4) + 1;
        r = func_0208da6c((void *)func_ov000_02150bc8, p + 0x22a0);
        switch (r) {
        case 2:
            func_ov000_0214fbe4(5);
            *(uint16_t *)(p + 0x12da) = 3;
            return 3;
        case 8:
            return 4;
        case 3:
        default:
            func_ov000_0214fbe4(0xb);
            return 7;
        }
    }
}
