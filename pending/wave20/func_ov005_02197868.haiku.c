#include "ffc/types.h"

typedef struct {
    uint32_t a : 10;
    uint32_t b : 7;
    uint32_t c : 1;
    uint32_t d : 4;
    uint32_t e : 8;
    uint32_t f : 1;
    uint32_t g : 1;
} Flags;

void func_ov005_02197868(uint32_t *p)
{
    union {
        uint32_t w;
        Flags f;
    } u;
    volatile uint32_t *vp = &u.w;
    u.w = *vp;
    u.f.a = 1;
    u.f.b = 0;
    u.f.c = 0;
    u.f.d = 0;
    u.f.e = 0;
    u.f.f = 0;
    *p = u.w;
}
