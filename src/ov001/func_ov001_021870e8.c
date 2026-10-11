#include "ffc/types.h"

typedef struct {
    uint8_t b[4];
} Pkt;

void func_ov001_021870e8(uint8_t **dst, Pkt src, uint32_t *cnt)
{
    uint8_t *p = *dst;
    uint8_t *s = (uint8_t *)&src;
    p[0] = s[0];
    p[1] = s[1];
    p[2] = s[2];
    p[3] = s[3];
    *cnt += 4;
    *dst += 4;
}
