#include "ffc/types.h"

extern int32_t *func_ov001_021729a8(void);
extern void func_02088e8c(void *p);
extern void func_ov000_0214b0e0(void *p, int n);
extern void *func_ov000_021653d4(uint32_t size);
extern void *func_020903cc(void *object, uint32_t v, uint32_t size);
extern void func_ov000_021652a8(int a, int b, int c, void *d, void *e, void *f, int g);
extern void func_ov001_02172c48(void);
extern uint8_t data_ov001_02194bfc[];
extern uint8_t data_ov001_0218f544[];
extern uint8_t data_ov001_0218f40c[];
extern uint8_t data_ov001_0218f808[];
extern uint8_t data_ov001_0218f848[];

void *func_ov001_02172d90(void)
{
    uint32_t zero = 0;
    uint8_t *r5 = 0;
    int32_t *p;
    int flag;

    p = func_ov001_021729a8();
    if (p != 0) {
        if (p[0] != 0) {
            if (p[1] > 0) {
                r5 = data_ov001_02194bfc;
                func_02088e8c(r5);
                func_ov000_0214b0e0(r5, 0x20);
                r5 = func_ov000_021653d4(0x830);
                if (r5 != 0) {
                    func_020903cc(r5, zero, 0x830);
                    *(uint32_t *)(r5 + 0x800) = zero;
                    *(int32_t *)(r5 + 0x814) = p[0];
                    *(int32_t *)(r5 + 0x818) = p[1];
                    *(void **)(r5 + 0x810) = (void *)func_ov001_02172c48;
                    return r5;
                }
                func_ov000_021652a8(8, 2, 2, data_ov001_0218f808, data_ov001_0218f544, data_ov001_0218f40c, 0x3fc);
                return r5;
            }
        }
        flag = 0x403;
    } else {
        flag = 0x40a;
    }
    func_ov000_021652a8(8, 2, 2, data_ov001_0218f848, data_ov001_0218f544, data_ov001_0218f40c, flag);
    return r5;
}
