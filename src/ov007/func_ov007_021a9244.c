#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

extern void *func_02069210(void *object);
extern uint32_t func_ov007_021a9304(uint32_t x);
extern void *func_0203b918(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *data_ov007_021c493c[];

void *func_ov007_021a9244(void *this, uint32_t p1, uint32_t p2, S p3)
{
    uint8_t *s = (uint8_t *)this;
    void *obj;
    void **vt;

    func_02069210(this);
    *(void ***)s = data_ov007_021c493c;
    *(uint32_t *)(s + 0x94) = p1;
    obj = func_0203b918(p2, func_ov007_021a9304(p1), 2, 1);
    *(void **)(s + 0x98) = obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 1, 0);
    obj = *(void **)(s + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *, S))vt[3])(obj, p3);
    obj = *(void **)(s + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
    func_02056bc0(s + 0x48, *(void **)(s + 0x98));
    return this;
}
