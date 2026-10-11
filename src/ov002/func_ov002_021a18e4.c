#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aa820(uint32_t value);

uint32_t func_ov002_021a18e4(const void *object)
{
    uint32_t count = 0;
    int i = 0;
    int n = (int)func_ov002_021a18bc(object);

    if (n > 0) {
        do {
            if (func_ov002_021aa820(func_ov002_021a18c4(object, i)) == 0) {
                count++;
            }
            i++;
        } while (i < (int)func_ov002_021a18bc(object));
    }
    return count;
}
