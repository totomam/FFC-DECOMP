#include "ffc/types.h"

extern int func_0206cb98(uint32_t x);
extern int func_ov002_0219635c(uint8_t *p);
extern uint32_t func_0203c23c(void);
extern int func_02060e9c(uint32_t x);
extern int func_02060eb4(uint32_t x);
extern uint32_t func_0203c250(void);
extern void func_020212a4(uint32_t x);
extern void func_02021380(uint32_t x);
extern void *func_0203b6fc(void);
extern void *func_0206cbf4(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *func_020757c8(void);
extern void *func_0203bfe0(uint32_t x);
extern void *func_0203bfcc(uint32_t x);
extern uint8_t data_020b8e44[];
extern uint32_t data_ov002_021d47e0[];

void func_ov002_0219626c(uint8_t *p)
{
    uint8_t *q;
    uint32_t r7;
    uint32_t *d;
    uint32_t a;
    uint32_t v;
    uint32_t s;
    uint32_t b;
    uint32_t *V;
    uint8_t *W;
    void *r4;
    void *r6;

    if (*(uint32_t *)(p + 0x3a4) == 0 || !func_0206cb98(*(uint32_t *)(p + 0x3a4))) {
        if (!func_ov002_0219635c(p)) {
            return;
        }
    }
    if (func_02060e9c(func_0203c23c())) {
        if (func_02060eb4(func_0203c23c())) {
            return;
        }
    }
    if (func_02060e9c(func_0203c250())) {
        if (func_02060eb4(func_0203c250())) {
            return;
        }
    }
    q = p + 0x48;
    *(uint32_t *)(q + 0xc) = (*(uint32_t *)(q + 0xc) & ~0xffu) | 1;
    func_020212a4(0xf);
    func_02021380(0xf);
    r4 = func_0203b6fc();
    if (*(uint32_t *)(p + 0x3a4) != 0) {
        func_02056bc0(r4, func_0206cbf4(*(uint32_t *)(p + 0x3a4)));
    }
    if (*(uint32_t *)(**(uint8_t ***)data_020b8e44 + 0x88) != 0 && *(uint32_t *)(p + 0x3e4) != 7) {
        func_02056bc0(r4, func_020757c8());
    }
    r7 = 0xf;
    r6 = func_0203bfe0(r7);
    func_02056bc0(r4, func_0203bfcc(r7));
    func_02056bc0(r4, r6);
    func_02056bc0(p + 0x14, r4);
    {
        uint32_t *D = data_ov002_021d47e0;
        *(uint32_t *)(p + 0x3c0) = D[0];
        *(uint32_t *)(p + 0x3c4) = D[1];
    }
}
