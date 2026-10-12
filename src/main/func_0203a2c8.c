#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern uint32_t func_0203c2e4(void);
extern void func_0205947c(uint32_t x, int y);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(uint32_t x);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0201b924(const void *object);
extern void *func_ov009_021adff0(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213df18;
extern void *data_020b93b8;

void func_0203a2c8(uint8_t *p)
{
    void *n;
    uint32_t v;

    func_020375f4(0xC40);
    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, 1, 1);
    v = func_0203c2e4();
    func_0205947c(v, 1);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    func_0203c36c();
    func_0203c394();
    n = func_0205681c(0x150);
    if (n != 0) {
        v = func_0201b924(data_020b93b8);
        n = func_ov009_021adff0(n, (uint8_t)v);
    }
    func_02056bc0(p + 0x14, n);
}
