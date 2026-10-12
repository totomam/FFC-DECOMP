#include "ffc/types.h"

extern void func_020424e0(uint32_t);
extern uint32_t func_ov003_0214cf60(void);
extern uint32_t func_ov003_0214d43c(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203c250(void);
extern void func_02060e88(uint32_t, uint32_t);
extern void func_02060ea4(uint32_t, uint32_t);
extern uint32_t func_02059c94(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_0204719c(uint8_t *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203b720(void);
extern uint32_t func_02043508(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02037550(uint32_t);
extern void func_02037568(void);
extern void func_02037580(void);
extern void func_02037598(void);
extern void func_02042cfc(uint32_t);

extern uint32_t data_020afc38[2];
extern uint32_t data_020afc40[2];

void func_02047034(uint8_t *self)
{
    uint32_t state;
    uint32_t r;
    uint32_t r5;
    uint32_t r6;
    uint32_t r7;
    uint32_t loc[7];

    state = *(uint32_t *)(self + 0x88);
    *(uint32_t *)(self + 0x88) = *(uint32_t *)(self + 0x88) + 1;

    switch (state) {
    case 0:
        func_020424e0(*(uint32_t *)(self + 0x80));
        r = func_ov003_0214cf60();
        func_02056bc0(self + 0x14, (void *)r);
        return;
    case 1:
        func_02060e88(func_0203c250(), 2);
        func_02060ea4(func_0203c250(), 0x10);
        loc[0] = 0;
        loc[1] = 0x1d;
        loc[2] = (uint32_t)-2;
        loc[3] = 0;
        loc[4] = 0;
        loc[5] = 0;
        loc[6] = (uint32_t)-92;
        r = func_02059c94(*(uint32_t *)(*(uint32_t *)(self + 0x80) + 0x120), loc[5], loc[6], loc[0], loc[1], loc[2]);
        func_02056bc0(self + 0x48, (void *)r);
        r5 = func_0204719c(self, data_020afc38[0], data_020afc38[1], 1, 0);
        r6 = func_0203b720();
        r = func_02043508(*(uint32_t *)(self + 0x80), data_020afc40[0], data_020afc40[1], 0, 0);
        func_02056bc0(self + 0x14, (void *)r);
        func_02056bc0(self + 0x14, (void *)r6);
        func_02056bc0(self + 0x14, (void *)r5);
        return;
    case 2:
        func_02056bc0(self + 0x14, (void *)*(uint32_t *)(self + 0x8c));
        return;
    case 3:
        switch (*(uint32_t *)(self + 0x84)) {
        case 0: func_02037550(0); break;
        case 1: func_02037568(); break;
        case 2: func_02037580(); break;
        case 3: func_02037598(); break;
        default: break;
        }
        func_02042cfc(*(uint32_t *)(self + 0x80));
        func_020424e0(*(uint32_t *)(self + 0x80));
        r = func_ov003_0214d43c();
        func_02056bc0(self + 0x14, (void *)r);
        return;
    case 4:
        *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2u;
        return;
    default:
        return;
    }
}
