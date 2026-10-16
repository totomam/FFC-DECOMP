#include "ffc/types.h"
extern void *func_020424e0(uint32_t a);
extern void *func_ov003_0214d964(void *x);
extern void *func_ov003_0214d9a0(void *x);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);
void func_ov003_02168378(uint8_t *self) {
    void *a, *b, *p, *x;
    x = func_020424e0(*(uint32_t *)(self + 0x80));
    if (*(uint8_t *)(self + 0x84) != 0) a = func_ov003_0214d964(x);
    else a = func_ov003_0214d9a0(x);
    b = func_02056aec(self);
    p = self + 0x14;
    func_02056bc0(p, a);
    func_02056bc0(p, b);
}
