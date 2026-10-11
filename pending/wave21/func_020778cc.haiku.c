#include "ffc/types.h"

extern void *func_02056aec(void *object);
extern void func_02056bc0(void *object, void *node);

typedef void (*VFn)(void *);

void func_020778cc(void *p)
{
    VFn *vt = *(VFn **)p;
    uint8_t *self = (uint8_t *)p;
    vt[5](p);
    **(uint32_t **)(self + 0x90) = 1;
    {
        void *node = func_02056aec(self);
        func_02056bc0(self + 0x14, node);
    }
}
