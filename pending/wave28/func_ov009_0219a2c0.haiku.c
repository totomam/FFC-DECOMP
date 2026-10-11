#include "ffc/types.h"

extern int func_02056c4c(void *p);

int func_ov009_0219a2c0(uint8_t *self, int flag) {
    void **obj;
    int r1;
    if (flag != 0) {
        r1 = self[0x98];
        obj = *(void ***)(self + 0x94);
        r1 = r1 + 3;
    } else {
        r1 = self[0x98];
        obj = *(void ***)(self + 0x94);
        r1 = r1 + 1;
    }
    ((void (*)(void *, int, int))((void **)obj[0])[14])(obj, r1, 0);
    obj = *(void ***)(self + 0x94);
    ((void (*)(void *, int))((void **)obj[0])[8])(obj, 2);
    return func_02056c4c(self + 0x14);
}
