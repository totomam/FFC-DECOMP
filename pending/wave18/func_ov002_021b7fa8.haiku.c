#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void func_02069328(void *object, int flag);
extern uint8_t data_ov002_021d6244[];

void *func_ov002_021b7fa8(void *obj, uint32_t val)
{
    func_02069210(obj);
    *(void **)obj = data_ov002_021d6244;
    *(uint32_t *)((uint8_t *)obj + 0x94) = val;
    func_02069328(obj, 1);
    return obj;
}
