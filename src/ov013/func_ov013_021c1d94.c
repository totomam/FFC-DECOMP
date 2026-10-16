#include "ffc/types.h"
extern void *func_02056aec(void *p);
extern void *func_0206c270(void *p);
extern void func_02056bc0(void *object, void *node);
void func_ov013_021c1d94(uint8_t *self)
{
    void *a;
    void *b;
    uint8_t *q;
    **(uint32_t **)(self + 0xc4) = 0;
    a = func_02056aec(self);
    b = func_0206c270(*(void **)(self + 0xc8));
    q = self + 0x14;
    func_02056bc0(q, b);
    func_02056bc0(q, a);
}
