#include "ffc/types.h"

extern void func_0205d620(void *p);
extern void func_02056844(void *p);

void func_ov009_021a19d0(void **param_1)
{
    void *v = param_1[0x6b];
    if (v != 0) {
        if (v != 0) {
            func_0205d620(v);
            func_02056844(v);
        }
        param_1[0x6b] = 0;
    }
}
