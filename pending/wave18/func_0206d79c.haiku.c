#include "ffc/types.h"

extern int32_t func_0208db58(void *fn);
extern void func_0206cb44(void *p);
extern void func_0206d7c0(void);

void func_0206d79c(void *p)
{
    uint8_t *base = (uint8_t *)p;
    base[0x30b4] = 0;
    if (func_0208db58((void *)func_0206d7c0) != 2) {
        func_0206cb44(p);
    }
}
