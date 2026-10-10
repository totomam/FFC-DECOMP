#include "ffc/types.h"

extern uint32_t func_020882cc(void);

typedef struct Inner {
    uint32_t a;
    uint32_t b;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Inner;

typedef struct Outer {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    Inner *p;
} Outer;

extern Outer data_ov000_0217004c;

void func_ov000_02159a10(void)
{
    Outer *g = &data_ov000_0217004c;
    Inner *p = g->p;
    if (p != 0) {
        p->f8 = 0;
        uint32_t r = func_020882cc();
        g->p->fc = r;
        g->p->f10 = (uint32_t)p;
    }
}
