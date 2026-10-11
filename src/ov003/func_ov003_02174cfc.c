#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_0216602c(void *p, void *obj, int flag, int zero, uint32_t a5, uint32_t a6, uint32_t a7);

void func_ov003_02174cfc(void *a0, int a1, uint32_t a2)
{
    void *p = func_0205681c(0x9c);
    if (p != 0) {
        int flag = 0;
        if (a1 == 0) {
            flag = 1;
        }
        func_ov003_0216602c(p, a0, flag, 0, a2, 0, 0);
    }
}
