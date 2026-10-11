#include "ffc/types.h"

extern uint32_t func_ov002_0219ffe8(void *a, uint32_t b);
extern uint32_t func_ov002_021a16d4(const void *object);
extern void *func_ov002_02196414(void *object);

uint32_t func_ov002_021a38c4(void *a, uint32_t b) {
    if (func_ov002_0219ffe8(a, b) != 1) {
        return b;
    }
    if (*(uint32_t *)func_ov002_02196414((void *)func_ov002_021a16d4(a)) == 3) {
        return b;
    }
    if (b != 0) {
        return 0;
    }
    return 1;
}
