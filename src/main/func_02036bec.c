#include "ffc/types.h"

typedef struct {
    uint32_t lo : 6;
    uint32_t v : 3;
    uint32_t rest : 23;
} S;

uint32_t func_02036bec(S *p) {
    return p->v;
}
