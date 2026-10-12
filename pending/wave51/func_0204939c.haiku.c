#include "ffc/types.h"

extern void *func_0203b688(void);
extern uint32_t func_020215a4(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203c030(void *object);
extern uint32_t func_0203c01c(void *object);
extern uint32_t func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02047718(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

void *func_0204939c(uint8_t *self, uint32_t a, uint32_t b)
{
    void *obj = func_0203b688();
    void *n = (void *)func_020215a4(0xffffffff, 0xf);
    func_02056bc0(obj, n);
    uint32_t v = func_0203c030((void *)0x1e);
    uint32_t c = func_0203c01c((void *)0x1e);
    void *t = (void *)func_0203b6fc();
    func_02056bc0(t, (void *)c);
    func_02056bc0(t, (void *)v);
    func_02056bc0(obj, t);
    void *p = func_0205681c(0x94);
    if (p != 0) {
        p = func_02047718(p, *(uint32_t *)(self + 0x94), a, a, b, 1, 1);
    }
    func_02056bc0(obj, p);
    return obj;
}
