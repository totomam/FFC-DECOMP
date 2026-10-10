#include "ffc/types.h"

typedef struct {
    uint32_t a : 14;
    uint32_t b : 9;
    uint32_t rest : 9;
} S;

uint32_t func_02035c2c(S *p) {
    return p->b;
}
