#include "ffc/types.h"

typedef struct {
    uint32_t pad : 3;
    uint32_t a : 3;
    uint32_t rest : 26;
} S;

uint32_t func_02036be4(S *p) {
    return p->a;
}
