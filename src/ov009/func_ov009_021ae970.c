#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern void func_ov009_021ae4bc(void *obj);

typedef void (*vfn_t)(void *, uint32_t, uint32_t);

void func_ov009_021ae970(uint8_t *p)
{
    void *obj;

    func_02021338(0xb3);
    obj = *(void **)(p + 0x98);
    ((vfn_t)(*(void ***)obj)[14])(obj, 4, 1);
    func_ov009_021ae4bc(*(void **)(p + 0x94));
}
