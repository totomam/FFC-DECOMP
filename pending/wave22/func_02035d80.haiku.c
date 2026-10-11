#include "ffc/types.h"

typedef struct {
    uint32_t pre;
    uint32_t lo : 8;
    uint32_t f : 1;
    uint32_t rest : 23;
} W;

uint32_t func_02035d80(W *a, W *b) {
    if (a->lo == b->lo) {
        if (a->f == b->f) {
            return 1;
        }
    }
    return 0;
}
