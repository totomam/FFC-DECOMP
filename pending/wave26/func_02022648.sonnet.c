#include "ffc/types.h"

void func_02022648(int8_t **p, int i) {
    int8_t c;
    do {
        (*p)++;
        c = *(int8_t *)((int)*(int8_t * volatile *)p + i);
    } while (c == 0x20 || c == 9);
}
