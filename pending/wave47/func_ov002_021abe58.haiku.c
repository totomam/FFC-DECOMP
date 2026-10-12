#include "ffc/types.h"

extern uint32_t func_ov002_021aa780(const void *object);
extern void func_ov002_021aac9c(void *object, uint32_t a, uint32_t b);
extern void *func_ov002_021aa850(const void *object);
extern int32_t func_ov002_021a18bc(const void *object);
extern void *func_ov002_021a18c4(const void *object, uint32_t index);
extern void *func_ov002_021a1ac4(const void *object);

void func_ov002_021abe58(void *object)
{
    uint32_t r = func_ov002_021aa780(object);
    int flag;
    if (r == 1 || r == 2 || r == 5) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag) {
        func_ov002_021aac9c(object, 0, 0);
        func_ov002_021aac9c(object, 1, 0);
        return;
    }

    void *obj = func_ov002_021aa850(object);
    int32_t i = 0;
    while (i < func_ov002_021a18bc(object)) {
        uint32_t k = i;
        func_ov002_021aac9c(func_ov002_021a18c4(obj, i), k, k);
        i++;
    }

    void *obj2 = func_ov002_021a1ac4(object);
    int32_t j = 0;
    while (j < func_ov002_021a18bc(obj2)) {
        uint32_t k2 = j;
        func_ov002_021aac9c(func_ov002_021a18c4(obj2, j), 1, k2);
        j++;
    }
}
