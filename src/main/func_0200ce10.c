#include "ffc/types.h"

typedef struct { int32_t v; } W;
typedef struct { uint8_t b; } S;
typedef struct { uint32_t f : 1; } F;
extern void func_0200a82c(void *p, int32_t a, int32_t b, int32_t c, int32_t d, S e);

void func_0200ce10(int32_t *out, uint8_t *p, W x, int32_t y) {
    int32_t base;
    int32_t diff;
    S s;
    if (((F *)p)->f == 0) base = (int32_t)(p + 2); else base = *(int32_t *)(p + 8);
    diff = x.v - base;
    func_0200a82c(p, diff / 2, 1, 0, 0, s);
    *out = x.v;
}
