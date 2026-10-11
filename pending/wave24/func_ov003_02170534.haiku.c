#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_0216602c(void *obj, void *a, uint32_t flag, uint32_t mode, void *b, uint32_t z1, uint32_t z2);

void func_ov003_02170534(void *a, void *b, uint32_t c)
{
    void *p = func_0205681c(0x9c);
    if (p != 0) {
        uint32_t flag = 0;
        if (c == 0) {
            flag = 1;
        }
        func_ov003_0216602c(p, a, flag, 2, b, 0, 0);
    }
}
