#include "ffc/types.h"

extern int func_ov004_02153544(void *p);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);
extern void *func_020655dc(void *a, int b, int c);
extern void *func_020655b8(void *a);

void func_ov004_0214be2c(uint8_t *p)
{
    if (func_ov004_02153544(*(void **)(p + 0x94)) != 0) {
        void *n = func_0203b708(2);
        func_02056bc0(*(void **)(p + 0x98), n);
    }

    int v = *(int *)(p + 0xa4);
    void *r;
    if (v < 9) {
        r = func_020655dc(*(void **)(p + 0xac), v + 0xb, 0);
    } else {
        r = func_020655dc(*(void **)(p + 0xac), v + 1, 0);
    }
    func_02056bc0(*(void **)(p + 0x98), r);

    r = func_020655b8(*(void **)(p + 0xac));
    func_02056bc0(*(void **)(p + 0x98), r);
}
