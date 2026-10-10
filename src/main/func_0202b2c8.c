#include "ffc/types.h"

int func_0202b2c8(void *p) {
    void *o = *(void **)((uint8_t *)p + 0x34);
    if (o != 0) {
        int (*fn)(void *) = (int (*)(void *))((void **)*(void **)o)[6];
        return fn(o);
    }
    return 0;
}
