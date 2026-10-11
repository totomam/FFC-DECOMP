#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0203c710(void *obj, int idx);
extern void func_02056bc0(void *object, void *node);

void func_0203d380(void *a0)
{
    uint8_t *p = *(uint8_t **)((uint8_t *)a0 + 0xd8);
    void *n;
    void *q;
    uint8_t *obj;

    if (p != 0) {
        *p = 0;
    }
    n = func_02056aec(a0);
    q = func_0203c710(a0, 3);
    obj = (uint8_t *)a0 + 0x14;
    func_02056bc0(obj, q);
    func_02056bc0(obj, n);
}
