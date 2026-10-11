#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

int func_02057db4(uint8_t *p)
{
    uint32_t buf[2];
    void *s = p + 0x20;
    int r = 1;
    func_0208763c(s);
    if (*(int32_t *)(p + 0x14)) {
        r = 0;
    }
    func_02087678(s);
    return r;
}
