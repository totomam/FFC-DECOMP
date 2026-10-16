#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
void func_ov002_021c9044(uint8_t *p, int i, Pair *s) {
    *(Pair *)(p + i * 8 + 0x10) = *s;
}
