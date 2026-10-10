#include "ffc/types.h"

void func_02054b04(uint8_t *p) {
    uint8_t *o = *(uint8_t **)(p + 0x14);
    if (o[8]) {
        void **vt = *(void ***)o;
        ((void (*)(void *))vt[2])(o);
    }
}
