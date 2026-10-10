/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint8_t a; int16_t b; } In;
typedef struct { int32_t x; uint32_t y; } Out;

void func_ov014_02146d2c(Out *o, const In *p) {
    uint32_t v = p->a;
    o->y = v;
    o->x = p->b;
}
