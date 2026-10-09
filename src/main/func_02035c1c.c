#include "ffc/types.h"

typedef struct {
    uint32_t a : 5;
    uint32_t rest : 27;
} S;

uint32_t func_02035c1c(S *p) {
    return p->a;
}
