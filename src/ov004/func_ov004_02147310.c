#include "ffc/types.h"

extern void *func_02056aec(void *self);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov004_02147310(uint8_t *self, void *arg)
{
    void *r5 = 0;
    if (arg == *(void **)(self + 0xd0)) {
        void *obj = *(void **)(self + 0xcc);
        void **vt = *(void ***)obj;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 4, 0);
        **(uint8_t **)(self + 0xc4) = 1;
    } else if (arg == *(void **)(self + 0xd4)) {
        void *obj = *(void **)(self + 0xcc);
        void **vt = *(void ***)obj;
        r5 = 0;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 5, 0);
        **(uint8_t **)(self + 0xc4) = 0;
    }
    r5 = func_02056aec(self);
    {
        void *t = func_020655b8(*(void **)(self + 0xcc));
        uint8_t *s = self + 0x14;
        func_02056bc0(s, t);
        func_02056bc0(s, r5);
    }
}
