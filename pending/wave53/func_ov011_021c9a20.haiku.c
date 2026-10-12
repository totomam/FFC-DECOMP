#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bed8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_0203c2e4(void);
extern void func_0205947c(uint32_t a, uint32_t b);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203bea0(void);
extern void func_0203bf28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void func_0204f550(uint32_t a);
extern uint32_t data_0213df18;
extern void func_0203c380(void);
extern void func_0203c394(void);
extern uint32_t func_0203c23c(void);
extern uint32_t func_02060e9c(void);
extern uint32_t func_0203c250(void);
extern void func_02060e80(void *object);
extern uint32_t func_02056aec(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov011_021c6fd4(void *a, uint32_t b, void *c, uint32_t d, uint8_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021c9a20(uint8_t *a) {
    uint32_t r6;
    uint32_t r4 = 0;
    uint32_t r7;
    void *node;

    func_0203be8c();
    r6 = 1;
    func_0203bed8(5, 0, 3, 1, 1, 1);
    func_0205947c(func_0203c2e4(), 1);
    func_0203c33c();
    func_0203c264();
    func_0203bea0();
    func_0203bf28(5, 2, 4, 1, 0, 0);
    func_0203c354();
    func_0203c270();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    func_0203c23c();
    if (func_02060e9c() != 1) {
        r6 = r4;
    }
    func_0203c250();
    r4 = (func_02060e9c() == 1);
    func_02060e80((void *)func_0203c23c());
    func_02060e80((void *)func_0203c250());
    r7 = func_02056aec(a);
    node = func_0205681c(0x3dc);
    if (node != 0) {
        node = (void *)func_ov011_021c6fd4(node, *(uint32_t *)(a + 0x80), a + 0x84,
                                          *(uint32_t *)(a + 0x284), a[0x288],
                                          *(uint32_t *)(a + 0x28c), r6, r4);
    }
    {
        uint8_t *s = a + 0x14;
        func_02056bc0(s, node);
        func_02056bc0(s, (void *)r7);
    }
}
