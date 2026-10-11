#include "ffc/types.h"

typedef struct {
    uint32_t pad : 12;
    uint32_t a : 14;
    uint32_t rest : 6;
} S;

uint32_t func_02036bfc(S *p) {
    return p->a;
}
