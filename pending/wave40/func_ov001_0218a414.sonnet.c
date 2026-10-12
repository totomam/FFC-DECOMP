#include "ffc/types.h"

extern int func_020559d4(void *p);
extern void func_ov001_0218def8(void *obj, int a);
extern void func_02021240(int a, int b);
extern uint32_t func_0203b738(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov001_02194618[2];
extern uint32_t data_ov001_02194620[2];

typedef int (*VFn)(void *);
typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov001_0218a414(void *self) {
    VFn *vt = *(VFn **)self;
    if (vt[13](self) != 0) {
        Pair s = *(Pair *)data_ov001_02194618;
        *(Pair *)((uint8_t *)self + 0xf4) = s;
        return;
    }
    func_020559d4((uint8_t *)self + 0xb0);
    if (((uint8_t *)self)[0x105] && ((uint8_t *)self)[0x3dd]) {
        func_ov001_0218def8(self, 0);
        func_02021240(-1, 10);
        {
            uint32_t t = func_0203b738();
            func_02056bc0((uint8_t *)self + 0x14, (void *)t);
        }
        {
            Pair s = *(Pair *)data_ov001_02194620;
            *(Pair *)((uint8_t *)self + 0xf4) = s;
        }
    }
}
