#include "ffc/types.h"

extern int32_t func_ov002_021a18bc(const void *object);
extern void *func_ov002_021a18c4(const void *object, uint32_t index);
extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021aabf4(void *object);

void *func_ov002_021a19dc(void *obj) {
    int32_t i = 0;
    if (func_ov002_021a18bc(obj) > 0) {
        do {
            void *p = func_ov002_021a18c4(obj, i);
            void *q = func_ov002_021aac10(p);
            if (func_ov002_021aa11c(q, 6) != 0) {
                if (func_ov002_021aabf4(p) != 0) {
                    return p;
                }
            }
            i++;
        } while (i < func_ov002_021a18bc(obj));
    }
    return 0;
}
