#include "ffc/types.h"

extern int func_ov000_021652a8(int a, int b, int c, void *d, void *e, void *f, uint32_t g);
extern void func_ov000_021653f4(void *p);
extern uint8_t data_ov001_0218f544[];
extern uint8_t data_ov001_0218f4a7[];
extern uint8_t data_ov001_0218fad0[];

typedef struct {
    uint32_t *p0;
    uint32_t pad4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Obj;

int func_ov001_02173088(int a0, Obj *p)
{
    func_ov000_021652a8(8, 4, 0xf, data_ov001_0218fad0, data_ov001_0218f544, data_ov001_0218f4a7, 0x4d5);
    if (p != 0) {
        uint32_t *r5 = p->p0;
        if (r5 != 0) {
            if (r5[0] != 0) {
                func_ov000_021653f4((void *)r5[0]);
            }
            func_ov000_021653f4(r5);
            p->p0 = 0;
        }
        p->f8 = 0;
        p->fc = 0;
        p->f10 = 0;
    }
    return 1;
}
