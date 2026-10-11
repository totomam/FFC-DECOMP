#include "ffc/types.h"

extern int func_0200764c(void *p);
extern void func_020073c4(void *p);
extern void func_02007334(void *p);

void func_02007318(void *p)
{
    if (func_0200764c(p) != 0) {
        func_020073c4(p);
        func_02007334(p);
    }
}
