#include "ffc/types.h"
extern void func_0204a894(void *p);
void func_0204deb0(uint8_t *p)
{
    if (*(uint32_t *)(p + 0x18) == 0) {
        func_0204a894(p);
        *(uint32_t *)(p + 0x18) = 1;
    }
}
