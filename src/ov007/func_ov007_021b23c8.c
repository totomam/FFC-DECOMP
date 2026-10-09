#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

typedef void (*vfn_t)(void *, uint32_t, uint32_t);

void func_ov007_021b23c8(uint8_t *p)
{
    void *obj;
    vfn_t fn;

    func_02021338(0xb3);
    obj = *(void **)(p + 0x94);
    fn = (*(vfn_t **)obj)[14];
    fn(obj, 4, 0);
}
