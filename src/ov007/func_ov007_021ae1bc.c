#include "ffc/types.h"

extern void func_ov007_021ae08c(void *p, int q);

void func_ov007_021ae1bc(void *p, int q)
{
    if (((uint8_t *)p)[0xa9] != 0) {
        func_ov007_021ae08c(p, q);
    }
}
