#include "ffc/types.h"

void func_020338dc(uint8_t *p, int flag) {
    void *obj;
    int v;
    if (flag) {
        if (p[0x98]) {
            v = 1;
        } else {
            v = 4;
        }
        obj = *(void **)(p + 0x94);
        ((void (*)(void *, int, int))(*(void ***)obj)[14])(obj, v, 0);
    } else {
        if (p[0x98]) {
            v = 2;
        } else {
            v = 5;
        }
        obj = *(void **)(p + 0x94);
        ((void (*)(void *, int, int))(*(void ***)obj)[14])(obj, v, 0);
    }
}
