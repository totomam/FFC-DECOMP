#include "ffc/types.h"

int func_0202b2dc(void *p) {
    void *o = *(void **)((uint8_t *)p + 0x34);
    if (o != 0) {
        int (*fn)(void *) = (int (*)(void *))((void **)*(void **)o)[7];
        return fn(o);
    }
    return 0;
}
