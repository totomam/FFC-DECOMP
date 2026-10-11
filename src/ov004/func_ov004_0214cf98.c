#include "ffc/types.h"

extern void func_02056c4c(void *a, int b);
extern void *func_020655dc(void *a, int b, int c);
extern void func_02056bc0(void *object, void *node);

void func_ov004_0214cf98(uint8_t *self, int flag)
{
    int r1;
    void *res;

    func_02056c4c(*(void **)(self + 0x9c), flag);
    r1 = (flag != 0) ? 3 : 6;
    res = func_020655dc(*(void **)(self + 0xa0), r1, 0);
    func_02056bc0(*(void **)(self + 0x9c), res);
}
