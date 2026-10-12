#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

int func_0200c874(uint8_t *self) {
    uint8_t flag;
    uint8_t *obj;
    uint8_t *p;
    int r5;
    int ret;

    obj = *(uint8_t **)(self + 0x98);
    flag = obj[0x12];
    p = obj + 0x1c;
    if (flag != 0) {
        func_0208763c(p);
    }
    r5 = (*(uint32_t *)(obj + 0x14) == 0);
    if (flag != 0) {
        func_02087678(p);
    }
    ret = 1;
    if (r5) {
        ret = 0;
    }
    return ret;
}
