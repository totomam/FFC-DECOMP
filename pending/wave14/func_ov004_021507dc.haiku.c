#include "ffc/types.h"

typedef struct {
    uint32_t *ptr;
    uint32_t mask;
} S;

int func_ov004_021507dc(S *p)
{
    if (*p->ptr & p->mask) {
        return 1;
    }
    return 0;
}
