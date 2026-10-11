#include "ffc/types.h"

extern void func_ov003_0214dde8(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_ov003_0217775c(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213df18;

void func_ov003_0214dda8(void *p)
{
    uint8_t *base = (uint8_t *)p;
    void *r4;

    func_ov003_0214dde8(p);
    r4 = func_0205681c(0x11C);
    if (r4 != 0) {
        uint32_t v = func_0204f7ec((const void *)data_0213df18);
        r4 = func_ov003_0217775c(r4, v);
    }
    *(void **)(base + 0x414) = r4;
    func_02056bc0(base + 0x48, r4);
}
