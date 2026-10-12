#include "ffc/types.h"

extern void *func_ov000_0214fa54(void *p);
extern int func_0208d828(void *fn);
extern int func_0208cd90(void);
extern void func_ov000_0214fbe4(int x);
extern void func_ov000_0214fb84(int a, void *b, int c, int d);
extern int func_0208d800(void *fn);
extern int func_0208ea2c(void *fn, int x);
extern int func_0208e970(void *fn, int a, int b, void *c);
extern int func_0208db80(void *fn, void *p, int z, int flag, int s);
extern void func_ov000_021509e8(void *p);
extern int func_ov000_02150dcc(void);

void func_ov000_021509e8(void *param)
{
    uint16_t *p = (uint16_t *)param;
    uint8_t *r4;
    int r5 = 0x14;
    int ret;
    uint32_t v;
    int s5, s3;

    r4 = (uint8_t *)func_ov000_0214fa54(param);

    switch (p[1]) {
    case 0:
        switch (p[0]) {
        case 3:
            r5 = func_0208d828((void *)func_ov000_021509e8);
            break;
        case 4:
            ret = func_0208cd90();
            switch (ret) {
            case 0:
                func_ov000_0214fbe4(1);
                func_ov000_0214fb84(0, 0, 0, 0x2a4);
                return;
            case 4:
            default:
                func_ov000_0214fbe4(0xb);
                func_ov000_0214fb84(7, 0, 0, 0x2ad);
                return;
            }
        case 5:
            func_ov000_0214fbe4(3);
            func_ov000_0214fb84(0, 0, 0, 0x2b4);
            return;
        case 6:
            r5 = func_0208d800((void *)func_ov000_021509e8);
            break;
        case 0x1d:
            r5 = func_0208ea2c((void *)func_ov000_021509e8, 0);
            break;
        case 0x19:
            r5 = func_0208e970((void *)func_ov000_021509e8, r4[0x1290], r4[0x1291], r4 + 0x1240);
            break;
        case 0x27:
            v = *(uint32_t *)(r4 + 0x12d4);
            r5 = 1;
            if ((v & (3 << 18)) != (3 << 18)) r5 = 0;
            s3 = 1;
            if ((v & (3 << 16)) == (3 << 16)) s3 = 0;
            r5 = func_0208db80((void *)func_ov000_02150dcc, r4 + 0x12e0, 0, s3, (uint16_t)r5);
            break;
        }
        if (r5 == 2) return;
        if (r5 != 3 && r5 == 8) {
            func_ov000_0214fbe4(0xc);
            func_ov000_0214fb84(1, (*(int16_t *)(r4 + 0x12da) == 5) ? (r4 + 0x12e0) : 0, 0, 0x2f0);
            return;
        }
        func_ov000_0214fbe4(0xb);
        func_ov000_0214fb84(7, (*(int16_t *)(r4 + 0x12da) == 5) ? (r4 + 0x12e0) : 0, 0, 0x2f9);
        return;
    case 1:
        func_ov000_0214fbe4(0xc);
        func_ov000_0214fb84(1, (*(int16_t *)(r4 + 0x12da) == 5) ? (r4 + 0x12e0) : 0, 0, 0x31f);
        return;
    case 2: case 3: case 4:
    default:
        func_ov000_0214fbe4(0xb);
        func_ov000_0214fb84(7, (*(int16_t *)(r4 + 0x12da) == 5) ? (r4 + 0x12e0) : 0, 0, 0x329);
        return;
    }
}
