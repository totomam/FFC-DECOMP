#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

int func_02057db4(uint8_t *self) {
    uint8_t *q = self + 0x20;
    int r;
    func_0208763c(q);
    if (*(uint32_t *)(self + 0x14) == 0) {
        r = 1;
    } else {
        r = 0;
    }
    func_02087678(q);
    return r;
}
