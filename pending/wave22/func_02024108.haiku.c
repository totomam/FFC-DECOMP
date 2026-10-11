#include "ffc/types.h"

extern void func_02022e40(uint32_t a, uint32_t b);
extern void func_02022e4c(uint32_t a, uint32_t b);

void func_02024108(uint8_t *p) {
    if (p[0xdc] != 0) {
        func_02022e40(*(uint32_t *)(p + 4), *(uint32_t *)(p + 0xd4));
        func_02022e4c(*(uint32_t *)(p + 4), *(uint32_t *)(p + 0xd8));
        p[0xdc] = 0;
    }
}
