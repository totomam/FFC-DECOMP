#include "ffc/types.h"

extern void func_02035be0(void *object);
extern void func_02035c88(void *a, const void *b);
extern void func_02036460(void *destination, const void *source);

void func_02036468(void *dst, const void *src) {
    if (src) {
        uint32_t tmp;
        func_02035be0(&tmp);
        func_02035c88(&tmp, src);
        func_02036460(dst, &tmp);
    }
}
