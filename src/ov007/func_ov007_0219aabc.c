#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069404(void *object, uint32_t value);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov007_021c2a98[];
extern uint8_t data_ov007_021c2894[];

void *func_ov007_0219aabc(void *self, void *param)
{
    uint8_t *s = (uint8_t *)self;
    void *o;
    void **vt;

    func_02069210(self);
    *(void **)s = (void *)data_ov007_021c2a98;
    func_02069320(self, 2);
    func_02069404(self, 4);
    o = func_0203b95c(*(void **)(data_ov007_021c2894 + 0x10), param, 0, 1);
    *(void **)(s + 0x94) = o;
    vt = *(void ***)o;
    ((void (*)(void *, uint32_t))vt[8])(o, 3);
    func_02064390(*(void **)(s + 0x94), 0x80, 0x60);
    o = *(void **)(s + 0x94);
    vt = *(void ***)o;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(o, 2, 0);
    o = *(void **)(s + 0x94);
    vt = *(void ***)o;
    ((void (*)(void *))vt[10])(o);
    func_02056bc0(s + 0x48, *(void **)(s + 0x94));
    return self;
}
