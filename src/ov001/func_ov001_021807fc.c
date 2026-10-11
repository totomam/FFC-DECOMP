#include "ffc/types.h"

typedef struct {
    uint32_t pad[3];
    int32_t v;
} S;

int func_ov001_021807fc(S *p)
{
    int32_t x = p->v;
    if (x < 5) {
        return 0;
    }
    if (x == 5) {
        return 1;
    }
    if (x == 6) {
        return 2;
    }
    return 3;
}
