#include "ffc/types.h"

typedef struct {
    uint8_t pad[8];
    uint8_t v;
} S;

int func_02019e68(int32_t unused, S *p)
{
    if (p->v == 5) {
        return 1;
    }
    return 0;
}
