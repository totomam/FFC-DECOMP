#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Vec3;

extern Vec3 *data_ov006_021bc734;

void func_ov006_021a69d8(Vec3 *src)
{
    *data_ov006_021bc734 = *src;
}
