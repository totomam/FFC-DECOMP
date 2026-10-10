#include "ffc/types.h"

typedef struct {
    uint32_t pad[6];
    uint32_t a;
    uint32_t b;
} DataOv006;

extern DataOv006 data_ov006_021bc70c;

void func_ov006_021a6508(uint32_t *p0, uint32_t *p1)
{
    if (p0 != 0) {
        *p0 = data_ov006_021bc70c.a;
    }
    if (p1 != 0) {
        *p1 = data_ov006_021bc70c.b;
    }
}
