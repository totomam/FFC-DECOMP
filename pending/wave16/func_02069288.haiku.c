#include "ffc/types.h"

typedef void (*VFn)(void *);

void func_02069288(void *p) {
    uint8_t *b = (uint8_t *)p;
    if (b[0x84] == 0) {
        VFn *vt;
        b[0x84] = 1;
        vt = *(VFn **)p;
        vt[8](p);
    }
}
