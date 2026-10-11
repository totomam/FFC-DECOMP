#include "ffc/types.h"

extern int func_ov000_0216552c(void *p0, uint32_t p1, uint32_t p2, uint32_t p3, void *p4, uint32_t p5);

typedef struct {
    uint8_t a;
    uint8_t b;
    uint16_t c;
    uint32_t d;
} S;

int func_ov001_02182a68(void *p0, uint32_t p1, int32_t p2, uint32_t p3, uint32_t p4)
{
    S buf;
    buf.b = 2;
    buf.c = (uint16_t)((uint8_t)(p2 >> 8) | ((p2 << 8) & 0xff00));
    buf.d = p1;
    return func_ov000_0216552c(p0, p3, p4, 0, &buf, 8);
}
