#include "ffc/types.h"

extern int32_t func_ov000_02152b68(void);
extern int32_t func_ov000_02152ae4(int32_t);
extern int32_t func_ov000_0214f964(void);
extern int32_t func_ov000_02154a04(int32_t);
extern int32_t func_ov000_02154a44(int32_t);
extern int32_t func_ov000_02154af0(void);
extern int32_t func_ov000_02154b10(int32_t);
extern int32_t func_ov000_02154b88(int32_t);
extern int32_t func_ov000_02154ba4(void);
extern void func_ov000_021572b8(void);
extern void func_ov000_02157240(void);

int32_t func_ov000_02154968(void)
{
    int32_t ctx;
    int32_t sel;

    sel = func_ov000_02152b68();
    ctx = func_ov000_02152ae4(0x10);
    if (func_ov000_0214f964() == 9) {
        switch (sel) {
        case 10:
            sel = func_ov000_02154a04(ctx);
            break;
        case 11:
            sel = func_ov000_02154a44(ctx);
            break;
        case 12:
            sel = func_ov000_02154af0();
            break;
        case 13:
            sel = func_ov000_02154b10(ctx);
            break;
        case 14:
            sel = func_ov000_02154b88(ctx);
            break;
        case 15:
            sel = func_ov000_02154ba4();
            break;
        }
    } else {
        if (sel == 11) {
            sel = func_ov000_02154ba4();
        } else if (sel == 14) {
            func_ov000_021572b8();
            func_ov000_02157240();
            sel = 11;
            *(uint8_t *)(ctx + ((*(uint8_t *)(ctx + 0x14c3)) << 2) + 0xbf4) = 2;
        } else if (sel == 15) {
            sel = func_ov000_02154b88(ctx);
        }
    }
    return sel;
}
