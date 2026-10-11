#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

void func_ov000_0215662c(uint8_t *p)
{
    if (p[0x1000] == 0xff) {
        func_0208763c(p + 0x1c34);
        *(uint32_t *)(p + 0x1c34 + 0x18) = 1;
        func_02087678(p + 0x1c34);
    }
}
