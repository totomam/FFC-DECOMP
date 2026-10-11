#include "ffc/types.h"

void func_02022390(void *p) {
    uint8_t *b = (uint8_t *)p;
    if (*(uint32_t *)(b + 0xe0) != 0) {
        *(uint32_t *)(b + 0xe0) = 0;
        ((void (*)(void *))((*(void ***)p)[6]))(p);
        *(uint32_t *)(b + 0xdc) = 0;
    }
}
