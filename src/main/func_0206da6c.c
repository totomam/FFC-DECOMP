#include "ffc/types.h"

typedef struct {
    uint32_t pad[8];
    uint8_t *arr;
} S;

uint8_t *func_0206da6c(S *p, int32_t i)
{
    return p->arr + i * 44;
}
