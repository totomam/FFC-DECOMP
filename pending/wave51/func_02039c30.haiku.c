#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_0203be8c(void);
extern void func_0203bed8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_0203c2e4(void);
extern void func_0205947c(uint32_t a, uint32_t b);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(uint32_t v);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov010_021bff40(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213df18;

void func_02039c30(uint8_t *p) {
    void *r;
    func_020375f4(0x31 << 6);
    func_0203be8c();
    func_0203bed8(5, 0, 4, 1, 1, 1);
    func_0205947c(func_0203c2e4(), 1);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    func_0203c36c();
    func_0203c394();
    r = func_0205681c(0x61 << 2);
    if (r != 0) {
        r = func_ov010_021bff40(r, *(uint32_t *)(p + 0x88));
    }
    func_02056bc0(p + 0x14, r);
}
