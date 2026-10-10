#include "ffc/types.h"

extern uint32_t func_ov002_021aaf9c(void *object, uint32_t index);
extern void *func_02015c98(void *unused, uint32_t index);
extern void *data_020b8e44;

void *func_ov002_021aaf80(void *object, uint32_t index)
{
    uint32_t r = func_ov002_021aaf9c(object, index);
    if (r != 0) {
        return func_02015c98(data_020b8e44, r);
    }
    return 0;
}
