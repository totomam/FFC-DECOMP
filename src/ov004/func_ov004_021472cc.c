#include "ffc/types.h"

extern void *func_02056aec(void *self);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);

typedef void (*VFn)(void *, uint32_t, uint32_t);

void func_ov004_021472cc(uint8_t *self) {
    uint32_t *a = *(uint32_t **)(self + 0x8c);
    if (*a != 0) {
        return;
    }
    void *obj = *(void **)(self + 0x90);
    VFn f = *(VFn *)((uint8_t *)(*(void **)obj) + 0x38);
    f(obj, 2, 0);
    void *r4 = func_02056aec(self);
    void *r = func_020655b8(*(void **)(self + 0x90));
    uint8_t *q = self + 0x14;
    func_02056bc0(q, r);
    func_02056bc0(q, r4);
}
