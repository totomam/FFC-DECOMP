#include "ffc/types.h"

extern int32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, int32_t index);
extern uint32_t func_ov002_021aafd4(uint32_t value);
extern uint32_t func_ov002_021aa778(const void *object);

void func_ov002_021a1d28(const void *object, uint32_t *out, int32_t *count)
{
    int32_t i;
    *count = 0;
    for (i = 0; i < func_ov002_021a18bc(object); i++) {
        if (func_ov002_021aafd4(func_ov002_021a18c4(object, i)) != 0) {
            out[*count] = func_ov002_021aa778(func_ov002_021a18c4(object, i));
            (*count)++;
        }
    }
}
