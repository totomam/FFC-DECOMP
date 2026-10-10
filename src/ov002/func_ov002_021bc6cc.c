#include "ffc/types.h"

void func_ov002_021bc6cc(uint8_t *self) {
    void *obj = *(void **)(self + 0x80);
    if (obj != 0) {
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);
    }
}
