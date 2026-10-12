#include "ffc/types.h"

extern uint32_t func_020424e0(void *p);
extern void *func_ov003_0214cf60(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203c250(void);
extern void func_02060e88(uint32_t a, uint32_t v);
extern void func_02060ea4(uint32_t a, uint32_t v);
extern uint32_t func_02059c94(uint32_t a, uint32_t b, int32_t c, uint32_t d, uint32_t e, int32_t f, int32_t g);
extern uint32_t func_020443f4(void *o, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0203b720(void);
extern uint32_t func_02043508(void *o, uint32_t a, uint32_t b);
extern void func_02037550(void);
extern void func_02042cfc(void *p);
extern void *func_ov003_0214d43c(void);
extern void func_020424d4(void *p, uint32_t v);
extern uint32_t func_0203b75c(uint32_t v);

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_020af6a0;
extern Pair data_020af6a8;

void func_02043fa4(uint8_t *this)
{
    uint32_t state;
    uint32_t *o80;
    Pair p;

    state = *(uint32_t *)(this + 0x84);
    *(uint32_t *)(this + 0x84) = *(uint32_t *)(this + 0x84) + 1;

    switch (state) {
    case 0:
        func_020424e0(*(void **)(this + 0x80));
        func_02056bc0(this + 0x14, func_ov003_0214cf60());
        return;
    case 1: {
        uint32_t r, r5, r6;
        func_02060e88(func_0203c250(), 2);
        func_02060ea4(func_0203c250(), 0x10);
        o80 = *(uint32_t **)(this + 0x80);
        r = func_02059c94(o80[0x120 / 4], 0, -0x5c, 0, 0, 0x1d, -2);
        func_02056bc0(this + 0x48, (void *)r);
        p = data_020af6a0;
        r5 = func_020443f4(this, p.a, p.b, 1);
        r6 = func_0203b720();
        p = data_020af6a8;
        r = func_02043508(*(void **)(this + 0x80), p.a, p.b);
        func_02056bc0(this + 0x14, (void *)r);
        func_02056bc0(this + 0x14, (void *)r6);
        func_02056bc0(this + 0x14, (void *)r5);
        return;
    }
    case 2:
        func_02056bc0(this + 0x14, *(void **)(this + 0x8c));
        return;
    case 3:
        func_02037550();
        if (*(uint32_t *)(this + 0x88) == 0) {
            func_02042cfc(*(void **)(this + 0x80));
            func_020424e0(*(void **)(this + 0x80));
            func_02056bc0(this + 0x14, func_ov003_0214d43c());
            return;
        }
        func_020424d4(*(void **)(this + 0x80), 0);
        o80 = *(uint32_t **)(this + 0x80);
        o80[3] = (o80[3] & ~0xffu) | 2;
        func_02056bc0(this + 0x14, (void *)func_0203b75c(1));
        return;
    case 4:
        *(uint32_t *)(this + 0xc) = (*(uint32_t *)(this + 0xc) & ~0xffu) | 2;
        return;
    }
    return;
}
