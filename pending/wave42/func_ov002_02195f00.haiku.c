#include "ffc/types.h"

extern uint32_t func_02037748(void);
extern uint32_t func_02037700(uint32_t a);
extern uint32_t func_02038b48(const void *object);
extern void func_0203911c(uint32_t a);
extern void func_02056c4c(void *p);
extern void func_02051a2c(uint32_t a, uint32_t b);
extern void func_02051980(void);
extern void func_02051ad8(uint32_t a);
extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void (*c)(void));
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern void func_02037b90(void);
extern uint32_t data_ov002_021d4790[];

void *func_ov002_02195f00(void *p)
{
    uint32_t a;
    uint32_t r;
    void *o;

    *(uint32_t *)p = (uint32_t)data_ov002_021d4790;
    o = ((void **)p)[0xf7];
    if (o != 0) {
        if (o != 0) {
            ((void (**)(void *))(*(void **)o))[1](o);
        }
        ((uint32_t *)p)[0xf7] = 0;
    }

    a = func_02037748();
    if (a != 0) {
        r = func_02038b48((void *)func_02037700(a));
        switch (r) {
        case 1:
            func_0203911c(func_02037700(r));
            break;
        case 2:
            break;
        }
    }

    func_02056c4c((uint8_t *)p + 0x14);
    func_02056c4c((uint8_t *)p + 0x48);
    func_02051a2c(0, 0);
    func_02051980();
    func_02051a2c(10, 1 << 10);
    func_02051ad8(0);
    func_0209d02c((uint8_t *)p + 0x94, 2, 0x160, func_02037b90);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
