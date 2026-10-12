#include "ffc/types.h"

extern int32_t func_ov002_0219c5d8(void *p, int32_t idx);

static inline int32_t f0(int32_t i) {
    if (i == 0 || (uint32_t)(i - 3) <= 1) return 1;
    return 0;
}
static inline int32_t f1(int32_t i) {
    if (i == 1 || i == 2 || i == 5) return 1;
    return 0;
}

int32_t func_ov002_0219c654(void *p, int32_t mode)
{
    int32_t count = 0;
    int32_t i = 0;
    for (; i < 6; i++) {
        switch (mode) {
        case 0:
            if (!f0(i)) continue;
            break;
        case 1:
            if (!f1(i)) continue;
            break;
        }
        if (func_ov002_0219c5d8(p, i)) count++;
    }
    return count;
}
