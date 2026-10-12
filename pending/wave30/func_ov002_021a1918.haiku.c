#include "ffc/types.h"

extern int32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern int32_t func_ov002_021aa820(const void *object);
extern uint8_t func_ov002_021aab40(const void *object);

uint32_t func_ov002_021a1918(const void *a, uint32_t b)
{
    int32_t i;
    for (i = 0; i < func_ov002_021a18bc(a); i++) {
        const void *p = (const void *)func_ov002_021a18c4(a, i);
        if (func_ov002_021aa820(p) > 0) {
            if (b == func_ov002_021aab40(p)) {
                return 1;
            }
        }
    }
    return 0;
}
