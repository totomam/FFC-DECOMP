#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Entry12;

extern Entry12 data_0209f488[];

uint32_t func_02059d54(uint32_t idx)
{
    return data_0209f488[idx].a << 11;
}
