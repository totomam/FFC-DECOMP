#include "ffc/types.h"

extern uint32_t *func_0207a834(void *p);
extern uint32_t func_0207ab40(uint32_t v);
extern void *func_0207c8dc(uint32_t v, uint32_t x);
extern uint32_t func_0207b60c(void *a, uint32_t b, uint32_t c, uint32_t d,
                              void *e, uint32_t f, void *g, uint32_t h);

typedef struct {
    uint32_t w0;
    uint16_t h4;
    uint8_t pad6[2];
    uint8_t b8;
    uint8_t b9;
} Obj;

uint32_t func_0207b524(void *a0, void *a1, uint32_t a2)
{
    uint32_t *p;
    uint32_t r;
    Obj *o;

    p = func_0207a834(a1);
    if (p == 0) {
        return 0;
    }
    r = func_0207ab40(*p);
    if (r == 0) {
        return 0;
    }
    o = (Obj *)func_0207c8dc(r, a2);
    if (o == 0) {
        return 0;
    }
    return func_0207b60c(a0, o->b9, o->h4, o->b8, o, r, a1, a2);
}
