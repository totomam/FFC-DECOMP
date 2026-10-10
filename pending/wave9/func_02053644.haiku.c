#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Ent;
typedef struct { Ent *begin; uint32_t count; } Range;
typedef struct { uint8_t f; } Flag;

extern void func_02053670(void *self, Ent *begin, Ent *end, Flag x);

void *func_02053644(void *self, Range *r) {
    Ent *b;
    Ent *e;
    if (self == (void *)r) return self;
    b = r->begin;
    e = b + r->count;
    {
        Flag fl = { 0 };
        Flag fl2 = fl;
        func_02053670(self, b, e, fl2);
    }
    return self;
}
