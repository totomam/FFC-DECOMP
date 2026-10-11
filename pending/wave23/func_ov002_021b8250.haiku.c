#include "ffc/types.h"

extern void func_ov002_021b8024(void *p);
extern char data_ov002_021d61dc[];

typedef void (*VFn)(void *);

void *func_ov002_021b8250(void *p, uint32_t a, uint32_t b, uint32_t c, uint8_t flag)
{
    uint8_t *o = (uint8_t *)p;
    func_ov002_021b8024(p);
    *(void **)o = (void *)data_ov002_021d61dc;
    o[0xac] = flag;
    if (o[0xac]) {
        void **obj = *(void ***)(o + 0x94);
        VFn fn = (VFn)((void **)*obj)[11];
        fn(obj);
    }
    return p;
}
