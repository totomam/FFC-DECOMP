#include "ffc/types.h"

typedef struct {
    uint8_t *arr;
} S;

uint8_t *func_ov004_0214f12c(S *p, int32_t i)
{
    return p->arr + i * 56;
}
