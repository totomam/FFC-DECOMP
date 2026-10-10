#include "ffc/types.h"

extern void func_ov000_02168738(void *p);

void func_ov001_0217b1a4(void **pp)
{
    char *obj = (char *)*pp;
    void *v = *(void **)(obj + 0x3b4);
    if (v != 0) {
        func_ov000_02168738(v);
        *(void **)(obj + 0x3b4) = 0;
    }
}
