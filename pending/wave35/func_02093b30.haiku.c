#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint32_t flags;
} S;

int func_02093b30(S *p, int32_t v) {
    if (p == 0 || ((p->flags << 22) >> 29) == 0) {
        return 0;
    }
    switch ((p->flags << 20) >> 30) {
    case 0:
        if (v > 0) {
            p->flags = (p->flags & 0xfffff3ffU) | (2U << 10);
        } else if (v < 0) {
            p->flags = (p->flags & 0xfffff3ffU) | (1U << 10);
        }
        return v;
    case 1:
        return -1;
    case 2:
        return 1;
    default:
        return v;
    }
}
