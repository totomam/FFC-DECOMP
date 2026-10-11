#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aafd4(void);

uint32_t func_ov002_021a1cf4(const void *object)
{
    int i = 0;
    while (i < (int)func_ov002_021a18bc(object)) {
        func_ov002_021a18c4(object, i);
        if (func_ov002_021aafd4() != 0) {
            return 1;
        }
        i++;
    }
    return 0;
}
