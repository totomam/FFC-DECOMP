#include "ffc/types.h"

typedef struct {
    uint8_t pad[8];
    uint8_t kind;
} S;

int func_02019e1c(void *a, S *p)
{
    switch (p->kind) {
    case 1:
        return 0;
    case 2:
        return 1;
    case 3:
        return 2;
    case 4:
        return 3;
    case 5:
        return 0;
    default:
        return 0;
    }
}
