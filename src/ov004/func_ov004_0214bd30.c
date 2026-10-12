#include "ffc/types.h"

extern int32_t func_ov004_021534f4(void *x);
extern int32_t func_ov004_0215313c(void *x);
extern void func_02056c4c(void *x);
extern void *func_020655dc(void *a, int32_t b, int32_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_ov004_0214be2c(void *p);
extern void func_020692a4(void *object);
extern void func_ov004_02153568(void *a, void *b);

void func_ov004_0214bd30(uint8_t *p)
{
    void *node;

    if (func_ov004_021534f4(*(void **)(p + 0x94)) == 0) {
        return;
    }
    if (func_ov004_0215313c(*(void **)(p + 0x94)) != 0) {
        return;
    }
    if (*(int32_t *)(p + 0xa4) <= 0) {
        return;
    }
    func_02056c4c(*(void **)(p + 0x98));
    node = func_020655dc(*(void **)(p + 0x9c), 5, 1);
    func_02056bc0(*(void **)(p + 0x98), node);
    *(int32_t *)(p + 0xa4) = *(int32_t *)(p + 0xa4) - 1;
    func_ov004_0214be2c(p);
    if (*(int32_t *)(p + 0xa4) == 0) {
        func_020692a4(p);
    }
    func_ov004_02153568(*(void **)(p + 0x94), *(void **)(p + 0xa0));
}
