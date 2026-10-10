#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} Quad;

void func_02053758(uint32_t *dst, uint32_t **src, uint32_t idx)
{
    uint32_t *s = (uint32_t *)((uint8_t *)*src + (idx << 4));
    dst[0] = s[0];
    dst[1] = s[1];
    dst[2] = s[2];
    dst[3] = s[3];
}
