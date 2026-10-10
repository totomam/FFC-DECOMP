#include "ffc/types.h"

typedef struct {
    uint32_t lo : 2;
    uint32_t b : 1;
    uint32_t rest : 29;
} Flags;

int func_02036bd0(Flags *p) {
    return p->b == 1;
}
