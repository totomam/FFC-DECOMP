#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_0203bea0(void);
extern void func_0203be8c(void);
extern void func_0203bf28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c354(void);
extern uint32_t func_0203c2f4(void);
extern void func_020591f4(uint32_t a, uint32_t b);
extern void func_0203c270(void);
extern void func_0203bed8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_0203c2e4(void);
extern void func_0205947c(uint32_t a, uint32_t b);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(uint32_t v);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern uint32_t func_0203c250(void);
extern void func_02060e80(void *object);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov011_021c3594(uint32_t obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object);
extern uint32_t data_0213df18;

void func_0203a3c8(void *param)
{
    uint8_t *p = (uint8_t *)param;
    uint32_t r;

    func_020375f4(0x51 << 6);
    func_0203bea0();
    func_0203be8c();
    func_0203bf28(5, 2, 4, 1, 0, 0);
    func_0203c354();
    if (p[0x97]) {
        r = func_0203c2f4();
        func_020591f4(r, 3);
    }
    func_0203c270();
    func_0203bed8(5, 0, 1, 0, 1, 1);
    r = func_0203c2e4();
    func_0205947c(r, 1);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    if (p[0x98]) {
        r = func_0203c250();
        func_02060e80((void *)r);
    }
    r = func_0205681c(0x76 << 2);
    if (r) {
        r = func_ov011_021c3594(r, *(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x8c),
                            *(uint32_t *)(p + 0x90), p[0x94], p[0x95], p[0x96], p[0x99]);
    }
    func_02056bc0(p + 0x14);
}
