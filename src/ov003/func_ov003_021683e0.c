#include "ffc/types.h"
extern void *func_020424e0(uint32_t a);
extern void *func_ov003_0214d9c0(void *x);
extern void *func_ov003_0214d9fc(void *x);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);
void func_ov003_021683e0(uint8_t *self) {
    void *a, *b, *p, *x;
    x = func_020424e0(*(uint32_t *)(self + 0x80));
    if (*(uint8_t *)(self + 0x84) != 0) a = func_ov003_0214d9c0(x);
    else a = func_ov003_0214d9fc(x);
    b = func_02056aec(self);
    p = self + 0x14;
    func_02056bc0(p, a);
    func_02056bc0(p, b);
}
