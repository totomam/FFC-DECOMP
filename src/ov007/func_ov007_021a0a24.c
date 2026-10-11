#include "ffc/types.h"

extern void *func_020655b8(void *);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t);
extern void func_ov007_021a04dc(void *);

void func_ov007_021a0a24(uint8_t *self) {
    void *obj = *(void **)(self + 0x98);
    void **vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 4, 1);
    void *n = func_020655b8(*(void **)(self + 0x98));
    func_02056bc0(self + 0x14, n);
    func_02021338(0xb3);
    func_ov007_021a04dc(*(void **)(self + 0x94));
}
