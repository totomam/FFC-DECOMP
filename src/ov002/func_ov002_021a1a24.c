#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021aa1a0(const void *object, uint32_t index);
extern uint32_t func_ov002_021aabfc(void *object);

void *func_ov002_021a1a24(void *p) {
    int32_t i = 0;
    if ((int32_t)func_ov002_021a18bc(p) > 0) {
        do {
            void *obj = (void *)func_ov002_021a18c4(p, (uint32_t)i);
            if (func_ov002_021aa11c(func_ov002_021aac10(obj), 7) != 0 &&
                func_ov002_021aa1a0(func_ov002_021aac10(obj), 7) != 0 &&
                func_ov002_021aabfc(obj) != 0) {
                return obj;
            }
            i++;
        } while (i < (int32_t)func_ov002_021a18bc(p));
    }
    return 0;
}
