#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);

typedef struct { int32_t x, y; } V;
typedef struct { V a; V b; } VV;

static inline void inner(uint8_t *obj, V a, V b)
{
    *(int32_t *)(obj + 0x34) = b.x;
    *(int32_t *)(obj + 0x38) = b.y;
}

static inline void setpos2(uint8_t *obj, V a, int32_t hx, int32_t hy)
{
    VV w;
    w.a = a;
    w.b.x = hx; w.b.y = hy;
    inner(obj, w.a, w.b);
}

static inline void setpos(uint8_t *obj, int32_t x, int32_t y, int32_t hx, int32_t hy)
{
    V a;
    a.x = x; a.y = y;
    setpos2(obj, a, hx, hy);
    return;
    VV w;
    w.a.x = x; w.a.y = y;
    w.b.x = hx; w.b.y = hy;
    inner(obj, w.a, w.b);
}

void func_ov003_0215043c(uint8_t *p, V v, uint16_t c, uint32_t d)
{
    int32_t ox, oy;
    uint32_t r6;

    *(uint32_t *)(p + 0x4c8) = v.x;
    *(uint32_t *)(p + 0x4cc) = v.y;
    *(uint16_t *)(p + 0x4d0) = c;
    *(uint32_t *)(p + 0x4d4) = d;
    r6 = *(uint32_t *)(p + 0x49c);
    oy = func_020817c8(v.y, r6);
    ox = func_020817c8(v.x, r6);
    V a;
    a.x = ox; a.y = oy;
    setpos2(*(uint8_t **)(p + 0x8c), a, (ox >> 12) - 0x80, (oy >> 12) - 0x60);
}
