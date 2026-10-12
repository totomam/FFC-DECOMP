#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021aa1a0(const void *object, uint32_t index);
extern void func_ov002_021aa9cc(void *object, uint32_t value);

void func_ov002_021a49bc(void *object)
{
    int i;
    for (i = 0; i < (int)func_ov002_021a18bc(object); i++) {
        void *p = (void *)func_ov002_021a18c4(object, i);
        if (func_ov002_021aa11c(func_ov002_021aac10(p), 7)) {
            if (func_ov002_021aa1a0(func_ov002_021aac10(p), 7)) {
                func_ov002_021aa9cc(p, 1);
            }
        }
    }
}
