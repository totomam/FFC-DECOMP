#include "ffc/types.h"

extern uint32_t func_0203c23c(void);
extern uint32_t func_0203c250(void);
extern uint32_t func_02060e9c(uint32_t);
extern uint32_t func_02060eb4(uint32_t);
extern void func_020212a4(uint32_t);
extern void func_02021380(uint32_t);
extern uint32_t func_0203c0a8(uint32_t);
extern uint32_t func_0203c094(uint32_t);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov002_021d4808;

void func_ov002_021966d4(void *self) {
    uint8_t *s = (uint8_t *)self;
    uint8_t *p = *(uint8_t **)(s + 0x88);
    uint32_t r4, r6, r7;

    if ((int8_t)*(uint32_t *)(p + 0xc) == 0) {
        void **vt = *(void ***)p;
        ((void (*)(void *))vt[2])(p);
    }

    p = *(uint8_t **)(s + 0x88);
    if ((int8_t)*(uint32_t *)(p + 0xc) == 2) {
        uint32_t *w = (uint32_t *)(s + 0xc);
        *w = (*w & ~0xffu) | 2u;
        return;
    }

    if (func_02060e9c(func_0203c23c()) != 0) {
        if (func_02060eb4(func_0203c23c()) != 0) {
            return;
        }
    }
    if (func_02060e9c(func_0203c250()) != 0) {
        if (func_02060eb4(func_0203c250()) != 0) {
            return;
        }
    }

    func_020212a4(0xf);
    func_02021380(0xf);
    r7 = func_0203c0a8(0x1e);
    r4 = func_0203c094(0x1e);
    r6 = func_0203b6fc();
    func_02056bc0((void *)r6, (void *)r4);
    func_02056bc0((void *)r6, (void *)r7);
    func_02056bc0(s + 0x14, (void *)r6);

    {
        uint8_t *q = *(uint8_t **)(s + 0x98);
        if (q != 0) {
            *q = s[0x94];
        }
    }
    {
        Pair tmp = *(Pair *)&data_ov002_021d4808;
        *(Pair *)(s + 0x80) = tmp;
    }
}
