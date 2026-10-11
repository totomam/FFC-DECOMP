#include "ffc/types.h"

void func_ov005_02197514(void *p) {
    int i;
    for (i = 0; i < 3; i++) {
        void *o = *(void **)((uint8_t *)p + 0x84 + i * 4);
        ((void (*)(void *))((void **)(*(void **)o))[11])(o);
    }
}
