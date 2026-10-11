#include "ffc/types.h"

typedef struct {
    uint32_t a : 10;
    uint32_t b : 7;
    uint32_t c : 1;
    uint32_t d : 4;
    uint32_t e : 8;
    uint32_t f : 1;
    uint32_t g : 1;
} Bits;

typedef union {
    uint32_t w;
    Bits s;
} U;

void func_ov005_02197868(uint32_t *p) {
    U u;
    u.s.a = 1;
    u.s.b = 0;
    u.s.c = 0;
    u.s.d = 0;
    u.s.e = 0;
    u.s.f = 0;
    *p = u.w;
}
