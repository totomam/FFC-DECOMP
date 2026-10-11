#include "ffc/types.h"

extern uint32_t func_0204f7d4(const void *object);
extern void *func_0203bb08(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;

void func_ov003_0215168c(uint8_t *p, void *r1)
{
    void **obj;
    void **vt;

    obj = (void **)func_0203bb08(func_0204f7d4(data_0213df18), r1, 1, 1, 0);
    *(void **)(p + 0x80) = obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 3);
    obj = *(void ***)(p + 0x80);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
    func_02056bc0(p + 0x48, *(void **)(p + 0x80));
}
