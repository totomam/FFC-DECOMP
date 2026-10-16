#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern Pair data_ov003_02179aa8;
void func_ov003_0214f3ac(uint8_t *p) {
    int32_t n;
    if (*(uint8_t *)(p + 0xb5) != 0) return;
    n = *(int32_t *)(p + 0xb8) - 1;
    *(int32_t *)(p + 0xb8) = n;
    if (n != 0) return;
    *(uint8_t *)(p + 0xb4) = 0;
    *(Pair *)(p + 0x80) = data_ov003_02179aa8;
}
