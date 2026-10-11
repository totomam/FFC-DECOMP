#include "ffc/types.h"

extern uint32_t func_ov002_021acff4(const void *object, uint32_t index);
extern void func_ov002_021ad084(void *object);
extern void func_ov002_021ad008(void *object, uint32_t index, uint32_t arg);

void func_ov002_021acfd0(void *object, uint32_t index)
{
    if (func_ov002_021acff4(object, index) != 0) {
        func_ov002_021ad084(object);
    } else {
        func_ov002_021ad008(object, index, 0);
    }
}
