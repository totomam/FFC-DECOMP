#include "ffc/types.h"

typedef struct {
    uint32_t pad[2];
    uint32_t v;
} S;

int func_ov000_02166460(S *a, S *b) {
    if (a->v == b->v) {
        return 0;
    }
    return 1;
}
