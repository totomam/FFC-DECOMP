#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    uint8_t *base;
} DataOv006;

extern DataOv006 data_ov006_021bc800;
extern int func_0208e8ac(uint8_t *a, uint8_t *b, void *c);

int func_ov006_021b2ae8(void *x)
{
    uint8_t *base = data_ov006_021bc800.base;
    return func_0208e8ac(base + 0x13e0, base + (7 << 10), x);
}
