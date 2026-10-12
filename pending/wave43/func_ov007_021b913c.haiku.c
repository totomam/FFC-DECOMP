#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203beb4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0203bf28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void func_0204f550(uint32_t v);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern uint32_t func_0203c23c(void);
extern void func_02060e80(void *object);
extern uint32_t func_0203c250(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b8a08(void *a, void *b, void *c, void *d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0202157c(uint32_t a, uint32_t b);
extern void *func_02056aec(void *object);
extern uint32_t data_0213df18;

void func_ov007_021b913c(uint8_t *p)
{
    void *node;
    uint32_t zero;

    func_0203be8c();
    func_0203bea0();
    zero = 0;
    func_0203beb4(5, 4, 0, 0);
    func_0203bf28(5, 2, 4, 1, zero, zero);
    func_0203c354();
    func_0203c270();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    func_02060e80((void *)func_0203c23c());
    func_02060e80((void *)func_0203c250());

    node = func_0205681c(0xec);
    if (node) {
        node = func_ov007_021b8a08(node, *(void **)(p + 0x80), p + 0x84, *(void **)(p + 0x94));
    }
    func_02056bc0(p + 0x14, node);
    node = (void *)func_0202157c(0x73, 0);
    func_02056bc0(p + 0x14, node);
    node = func_02056aec(p);
    func_02056bc0(p + 0x14, node);
}
