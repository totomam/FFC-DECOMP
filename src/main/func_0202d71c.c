#include "ffc/types.h"

extern int func_0202b2c8(void *p);

int func_0202d71c(void *p) {
    void *a = *(void **)((uint8_t *)p + 0x80);
    if (a != 0) {
        return func_0202b2c8(a);
    }
    a = *(void **)((uint8_t *)p + 0x84);
    if (a != 0) {
        return func_0202b2c8(a);
    }
    return 0;
}
