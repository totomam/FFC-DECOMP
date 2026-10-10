#include "ffc/types.h"

extern int32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aa778(const void *object);

void func_ov002_021a1d74(const void *object, uint32_t *out, uint32_t *count)
{
    int32_t i = 0;
    *count = 0;
    if (func_ov002_021a18bc(object) > 0) {
        do {
            out[*count] = func_ov002_021aa778(func_ov002_021a18c4(object, i));
            i++;
            (*count)++;
        } while (i < func_ov002_021a18bc(object));
    }
}
