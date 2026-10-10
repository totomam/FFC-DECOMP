#include "ffc/types.h"

typedef struct {
    uint32_t a : 5;
    uint32_t b : 9;
    uint32_t rest : 18;
} S;

uint32_t func_02035c24(S *p) {
    return p->b;
}
