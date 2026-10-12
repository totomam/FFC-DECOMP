#include "ffc/types.h"

extern int32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);

int32_t func_ov002_021a19a0(void *obj, uint32_t bit)
{
    int32_t count = 0;
    int32_t i = 0;

    if (func_ov002_021a18bc(obj) > 0) {
        do {
            void *item = (void *)func_ov002_021a18c4(obj, i);
            if (func_ov002_021aa11c(func_ov002_021aac10(item), bit) != 0) {
                count++;
            }
            i++;
        } while (i < func_ov002_021a18bc(obj));
    }
    return count;
}
