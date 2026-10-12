#include "ffc/types.h"

typedef struct Ent {
    uint16_t lo;
    uint16_t hi;
    struct Ent *next;
} Ent;

typedef struct Obj {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    Ent *list;
} Obj;

uint8_t *func_020783d0(Obj **pp, uint32_t x)
{
    Ent *e;
    Obj *o;
    o = *pp;
    e = o->list;
    while (e != 0) {
        if (e->lo <= x && x <= e->hi) {
            return (uint8_t *)(e + 1) + (x - e->lo) * 3;
        }
        e = e->next;
    }
    return (uint8_t *)o + 4;
}
