#include "ffc/types.h"

extern uint32_t func_0207e920(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_0207e890(void *object);
typedef struct { uint32_t lo; uint32_t hi; } Pair;
extern uint32_t func_0207e990(void *object, Pair v);
extern uint32_t func_0207e9c0(void *object, uint32_t a, uint32_t b);
extern uint32_t func_0207a618(void *object, uint32_t b, uint32_t c);
extern void *data_0213ec90;


void func_0207a584(uint32_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    Pair *q;

    p[38] = 0;
    p[36] = 0;
    p[37] = 0;
    p[39] = 0;
    p[33] = 0;
    p[34] = 0;
    p[35] = 0;

    if (func_0207e920(&p[31], a, b, c) != 0) {
        func_0207e890(&p[13]);
        q = (Pair *)&p[31];
        if (func_0207e990(&p[13], *q) == 0) {
            return;
        }
    } else {
        p[32] = (uint32_t)-1;
        p[31] = 0;
        if (func_0207e9c0(&p[13], a, 1) == 0) {
            return;
        }
    }

    p[12] = 1;
    if (func_0207a618(p, b, c) != 0) {
        data_0213ec90 = p;
    }
}
