#include "ffc/types.h"

extern int32_t func_02097d78(void *p);
extern void func_02097cc8(void *p);
extern int32_t func_02097d00(void *p);

int32_t func_020989f0(void *p, int32_t x) {
    uint8_t *b = (uint8_t *)p;
    if (b[0x3a] == 0) {
        return -1;
    }
    if (*(int32_t *)(b + 8) != 0) {
        if (func_02097d78(p) < 0) {
            return -1;
        }
        *(int32_t *)(b + 4) = 0;
        *(int32_t *)(b + 8) = 0;
        *(int32_t *)(b + 0xc) = 0;
    }
    if (*(uint8_t **)(b + 0x14) == 0) {
        func_02097cc8(p);
    }
    if (x != -1) {
        **(uint8_t **)(b + 0x14) = (uint8_t)x;
        *(uint8_t **)(b + 0x14) = *(uint8_t **)(b + 0x14) + 1;
    }
    if (func_02097d00(p) < 0) {
        return -1;
    }
    if (x == -1) {
        x = 0;
    }
    return x;
}
