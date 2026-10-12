#include "ffc/types.h"

typedef struct {
    uint32_t pad : 11;
    uint32_t a : 8;
    uint32_t rest : 13;
} S;

uint32_t func_02036f30(S *p) {
    return p->a;
}
