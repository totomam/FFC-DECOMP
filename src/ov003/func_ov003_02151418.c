#include "ffc/types.h"

void func_ov003_02151418(void *p) {
    int i;
    for (i = 0; i < 2; i++) {
        void *o = *(void **)((uint8_t *)p + 0x80 + i * 4);
        ((void (*)(void *))((void **)(*(void **)o))[10])(o);
    }
}
