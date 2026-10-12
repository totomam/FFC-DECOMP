#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint16_t c;
    uint32_t d;
} S;

void func_ov003_0215043c(uint8_t *p, S s)
{
    uint32_t r6;
    uint32_t x;
    uint32_t y;
    int32_t hx;
    int32_t hy;
    uint8_t *obj;

    *(uint32_t *)(p + 0x4c8) = s.a;
    *(uint32_t *)(p + 0x4cc) = s.b;
    *(uint16_t *)(p + 0x4d0) = s.c;
    *(uint32_t *)(p + 0x4d4) = s.d;
    r6 = *(uint32_t *)(p + 0x49c);
    y = func_020817c8(s.b, r6);
    x = func_020817c8(s.a, r6);
    hx = (int32_t)x >> 12;
    hx -= 0x80;
    hy = (int32_t)y >> 12;
    hy -= 0x60;
    obj = *(uint8_t **)(p + 0x8c);
    *(int32_t *)(obj + 0x34) = hx;
    *(int32_t *)(obj + 0x38) = hy;
}
