#include "ffc/types.h"

typedef struct {
    uint32_t b : 1;
    uint32_t rest : 31;
} Flags;

int func_02036ba8(Flags *p) {
    return p->b == 1;
}
