/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {

extern uint32_t func_020424e0(void *p);
extern void *func_ov003_0214cf60(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203c250(void);
extern void func_02060e88(uint32_t a, uint32_t v);
extern void func_02060ea4(uint32_t a, uint32_t v);
struct P2 { int32_t a; int32_t b; P2(int x,int y):a(x),b(y){} };
extern uint32_t func_02059c94(uint32_t a, P2 b, P2 c, int32_t d, int32_t e);
struct Pair { uint32_t a; uint32_t b; };
extern uint32_t func_020443f4(void *o, Pair p, uint32_t c);
extern uint32_t func_0203b720(void);
extern uint32_t func_02043508(void *o, Pair p);
extern void func_02037550(void);
extern void func_02042cfc(void *p);
extern void *func_ov003_0214d43c(void);
extern void func_020424d4(void *p, uint32_t v);
extern uint32_t func_0203b75c(uint32_t v);

extern Pair data_020af6a0;
extern Pair data_020af6a8;


void func_02043fa4(uint8_t *self)
{
    uint32_t state;
    uint32_t *o80;

    state = *(uint32_t *)(self + 0x84);
    *(uint32_t *)(self + 0x84) = *(uint32_t *)(self + 0x84) + 1;

    switch (state) {
    case 0:
        func_020424e0(*(void **)(self + 0x80));
        func_02056bc0(self + 0x14, func_ov003_0214cf60());
        return;
    case 1: {
        uint32_t r, r5, r6;
        func_02060e88(func_0203c250(), 2);
        func_02060ea4(func_0203c250(), 0x10);
        o80 = *(uint32_t **)(self + 0x80);
        r = func_02059c94(o80[0x120 / 4], P2(0,-0x5c), P2(0,0), 0x1d, -2);
        func_02056bc0(self + 0x48, (void *)r);
        r5 = func_020443f4(self, data_020af6a0, 1);
        r6 = func_0203b720();
        r = func_02043508(*(void **)(self + 0x80), data_020af6a8);
        {
        uint8_t *q = self + 0x14;
        func_02056bc0(q, (void *)r);
        func_02056bc0(q, (void *)r6);
        func_02056bc0(q, (void *)r5);
        }
        return;
    }
    case 2:
        func_02056bc0(self + 0x14, *(void **)(self + 0x8c));
        return;
    case 3:
        func_02037550();
        if (*(uint32_t *)(self + 0x88) == 0) {
            func_02042cfc(*(void **)(self + 0x80));
            func_020424e0(*(void **)(self + 0x80));
            func_02056bc0(self + 0x14, func_ov003_0214d43c());
            return;
        }
        func_020424d4(*(void **)(self + 0x80), 0);
        o80 = *(uint32_t **)(self + 0x80);
        o80[3] = (o80[3] & ~0xffu) | 2;
        func_02056bc0(self + 0x14, (void *)func_0203b75c(1));
        return;
    case 4:
        *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
        break;
    }
}

}
