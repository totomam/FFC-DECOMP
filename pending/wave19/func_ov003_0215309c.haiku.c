#include "ffc/types.h"

extern void func_ov003_02150068(void *p);
extern void func_ov003_02151658(void *p);

void func_ov003_0215309c(uint8_t *p)
{
    void *a = *(void **)(p + 0xa0);
    if (a != 0) {
        func_ov003_02150068(a);
    }
    a = *(void **)(p + 0xa4);
    if (a != 0) {
        func_ov003_02151658(a);
    }
}
