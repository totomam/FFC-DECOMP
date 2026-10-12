#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02145308(void *a, void *b, uint32_t c, uint32_t d);

void func_02042cfc(uint8_t *p) {
    void *node;
    void *r;

    func_020375f4(0x10);
    func_02056bc0(p + 0x48, *(void **)(p + 0x154));
    r = func_0205681c(0x430);
    node = r;
    if (r != 0) {
        uint32_t flag = (*(void **)(p + 0x16c)) != 0;
        node = func_ov003_02145308(r, p + 0x120, 0, flag);
    }
    *(void **)(p + 0x8c) = node;
    func_02056bc0(*(void **)(p + 0x154), node);
    {
        uint32_t *o = *(uint32_t **)(p + 0x154);
        o[3] &= ~0xffu;
    }
}
