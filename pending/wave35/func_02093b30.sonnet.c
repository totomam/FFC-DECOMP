#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint32_t lo:7;
    uint32_t f:3;
    uint32_t d:2;
    uint32_t hi:20;
} S;

int func_02093b30(S *p, int32_t v) {
    if (p == 0 || p->f == 0) {
        return 0;
    }
    switch (p->d) {
    case 0:
        if (v > 0) {
            p->d = 2;
        } else if (v < 0) {
            p->d = 1;
        }
        break;
    case 2:
        v = 1;
        break;
    case 1:
        v = -1;
        break;
    }
    return v;
}
