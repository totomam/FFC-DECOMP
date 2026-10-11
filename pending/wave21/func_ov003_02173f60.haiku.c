#include "ffc/types.h"

extern void *func_020424e0(void *p);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02173f60(void *p)
{
    uint8_t *base = (uint8_t *)p;
    void *o = *(void **)(base + 0x88);
    uint8_t *q = (uint8_t *)func_020424e0(o);
    q[0x412] = 0;
    void *n = func_02056aec(p);
    func_02056bc0(base + 0x14, n);
}
