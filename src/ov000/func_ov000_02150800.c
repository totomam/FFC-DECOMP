#include "ffc/types.h"

extern void *func_ov000_0214fa54(void);
extern void *func_0208d244(void);
extern void func_02087874(void *p, int x);
extern int func_0208cd90(void);
extern void func_ov000_0214fbe4(int x);
extern int func_0208d800(void *f);
extern int func_0208d850(void *f);
extern int func_0208d8c8(void *f);
extern void func_ov000_021509e8(void);
extern void func_ov000_0215114c(void);

int func_ov000_02150800(void)
{
    uint8_t *ctx = (uint8_t *)func_ov000_0214fa54();
    uint16_t *obj = (uint16_t *)func_0208d244();
    int r;

    func_02087874(obj, 2);
    switch (*obj) {
    case 0:
        r = func_0208cd90();
        if (r == 0) {
            func_ov000_0214fbe4(1);
            *(uint16_t *)(ctx + 0x12da) = 0;
            return 0;
        }
        break;
    case 1:
        r = func_0208d800((void *)func_ov000_021509e8);
        break;
    case 2:
        r = func_0208d850((void *)func_ov000_021509e8);
        break;
    default:
        *(uint8_t *)(ctx + 0x12dd) = 1;
        r = func_0208d8c8((void *)func_ov000_0215114c);
        break;
    }

    switch (r) {
    case 2:
        func_ov000_0214fbe4(0xd);
        *(uint16_t *)(ctx + 0x12da) = 9;
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
