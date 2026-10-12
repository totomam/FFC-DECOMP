#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern int func_0208cbe0(uint8_t *p, uint16_t v);
extern void func_ov000_0214fbe4(int x);
extern int func_0208d320(void (*f)(void));
extern void func_02088b3c(uint8_t *p);
extern void func_ov000_021503c0(uint8_t *p);
extern int func_0208d7b4(void (*f)(void));
extern void func_ov000_02150994(void);
extern void func_ov000_021509e8(void);

int func_ov000_02150598(void)
{
    uint8_t buf[8];
    uint8_t *base;
    int r;
    uint32_t off;

    base = func_ov000_0214fa54();
    off = 0x13a0;
    r = func_0208cbe0(base + off, (uint16_t)*(uint32_t *)(base + off - 0xe0));
    switch (r) {
    case 3:
        func_ov000_0214fbe4(0xb);
        return 7;
    case 4:
        return 5;
    case 1:
    case 2:
    case 5:
    case 6:
    default:
        func_ov000_0214fbe4(0xb);
        return 7;
    case 0:
        if (func_0208d320(func_ov000_02150994) != 0) {
            func_ov000_0214fbe4(0xb);
            return 7;
        }
        func_02088b3c(buf);
        func_ov000_021503c0(buf);
        r = func_0208d7b4(func_ov000_021509e8);
        switch (r) {
        case 2:
            func_ov000_0214fbe4(2);
            *(uint16_t *)(base + off - 0xc6) = 1;
            break;
        case 8:
            func_ov000_0214fbe4(0xc);
            return 1;
        case 3:
        default:
            func_ov000_0214fbe4(0xb);
            return 7;
        }
        return 3;
    }
}
