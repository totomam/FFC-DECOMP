#include "ffc/types.h"

typedef struct {
    uint32_t pad : 1;
    uint32_t b : 1;
    uint32_t rest : 30;
} Flags;

int func_02036bbc(Flags *p) {
    return p->b == 1;
}
