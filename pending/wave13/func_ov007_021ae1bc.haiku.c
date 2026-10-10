#include "ffc/types.h"

extern void func_ov007_021ae08c(void *p);

void func_ov007_021ae1bc(void *p)
{
    uint8_t *b = (uint8_t *)p;
    if (b[0xa9] != 0) {
        func_ov007_021ae08c(p);
    }
}
