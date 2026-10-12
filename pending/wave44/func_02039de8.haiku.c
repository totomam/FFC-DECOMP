#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void *func_0203c2e4(void);
extern void func_0205947c(void *x, int y);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(uint32_t x);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov010_021caf0c(void *p);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213df18;

void func_02039de8(uint8_t *a)
{
    void *node;

    func_020375f4(0x31 << 6);
    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, 1, 1);

    func_0205947c(func_0203c2e4(), 1);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    func_0203c36c();
    func_0203c394();
    node = func_0205681c(0x7d << 2);
    if (node != 0) {
        node = func_ov010_021caf0c(node);
    }
    func_02056bc0(a + 0x14, node);
}
