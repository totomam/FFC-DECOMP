#include "ffc/types.h"

extern void func_ov009_021ae4fc(void *a, void *b);
extern void func_02021338(uint32_t x);

typedef void (*VFn)(void *, uint32_t, uint32_t);

void func_ov009_021ae948(uint8_t *p)
{
    void *obj = *(void **)(p + 0x98);
    VFn *vt = *(VFn **)obj;
    vt[14](obj, 4, 1);
    func_ov009_021ae4fc(*(void **)(p + 0x94), *(void **)(p + 0x9c));
    func_02021338(0xbc);
}
