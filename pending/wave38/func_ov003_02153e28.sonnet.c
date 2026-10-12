#include "ffc/types.h"
extern int32_t func_02081210(int32_t a, int32_t b);
typedef struct { int32_t x, y; } P;
typedef struct { int32_t x, y, w, h; } R;
typedef struct {
  P ix; int32_t pad1[2]; P raw; int32_t pad2[(0x38-0x18)/4]; P a1; P dd; R r;
} S;
int32_t func_ov003_02153e28(int32_t *self, int32_t *p)
{
    S s;
    int32_t a = func_02081210(p[1], 0x2000);
    int32_t b = func_02081210(p[0], 0x2000);
    s.a1.x = b; s.a1.y = a;
    s.raw = s.a1;
    s.dd.x = b >> 12; s.dd.y = a >> 12;
    s.ix = s.dd;
    s.r.h = self[2]; s.r.w = self[1]; s.r.x = 0; s.r.y = 0;
    if (s.r.x > s.ix.x || s.ix.x >= s.r.w || s.r.y > s.ix.y || s.ix.y >= s.r.h) return -1;
    return s.ix.x + s.ix.y * s.r.w;
}
