#include "ffc/types.h"

typedef struct {
    uint32_t lo : 9;
    uint32_t v : 3;
    uint32_t rest : 20;
} S;

uint32_t func_02036bf4(S *p) {
    return p->v;
}
