#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern int func_0208ea60(void *f, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov000_0214fbe4(int x);
extern void func_ov000_021509e8(void);

int func_ov000_02150748(void)
{
    uint8_t *p = func_ov000_0214fa54();
    uint32_t off = 0x12de;
    int r;

    if (p[off] == 3) {
        *(uint16_t *)(p + off + 0x32) = (uint16_t)(3 | *(uint16_t *)(p + off + 0x30));
    }

    r = func_0208ea60((void *)func_ov000_021509e8, 0xffff, 0x50, 0xffff, 0xffff);
    switch (r) {
    case 2:
        func_ov000_0214fbe4(8);
        *(uint16_t *)(p + 0x12da) = 5;
        break;
    case 8:
        return 4;
    case 3:
    default:
        func_ov000_0214fbe4(0xb);
        return 7;
    }
    return 3;
}
