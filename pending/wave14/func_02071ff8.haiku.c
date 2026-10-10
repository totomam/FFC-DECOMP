#include "ffc/types.h"

extern int func_ov000_021554a8(void *a, void *b);

typedef struct {
    uint32_t pad[2];
    void *ptr;
} S;

int func_02071ff8(S *a, S *b)
{
    if (func_ov000_021554a8(a->ptr, b->ptr)) {
        return 1;
    }
    return 0;
}
