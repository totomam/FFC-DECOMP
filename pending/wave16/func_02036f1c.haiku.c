#include "ffc/types.h"

typedef struct {
    uint32_t lo : 10;
    uint32_t b : 1;
    uint32_t rest : 21;
} Flags;

int func_02036f1c(Flags *p) {
    return p->b == 1;
}
