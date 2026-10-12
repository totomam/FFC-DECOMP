#include "ffc/types.h"

extern int32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern void func_ov002_021aa9c4(void *object, uint32_t arg);

void func_ov002_021a497c(void *param_0)
{
    int32_t i = 0;
    if (func_ov002_021a18bc(param_0) > 0) {
        do {
            void *p = (void *)func_ov002_021a18c4(param_0, i);
            if (func_ov002_021aa11c(func_ov002_021aac10(p), 6) != 0) {
                func_ov002_021aa9c4(p, 1);
            }
            i++;
        } while (i < func_ov002_021a18bc(param_0));
    }
}
