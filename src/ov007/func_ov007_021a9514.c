#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern void func_ov007_021a936c(void *obj);

typedef void (*vfn_t)(void *, uint32_t, uint32_t);

void func_ov007_021a9514(uint8_t *p)
{
    void *obj;

    func_02021338(0xcf);
    obj = *(void **)(p + 0x98);
    ((vfn_t)(*(void ***)obj)[14])(obj, 3, 1);
    func_ov007_021a936c(*(void **)(p + 0x94));
}
