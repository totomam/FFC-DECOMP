#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint8_t pad[0xa8];
    uint32_t f_a8;
    uint32_t f_ac;
} Obj;

void func_02033440(Obj *o, Pair v) {
    o->f_a8 = v.a;
    o->f_ac = v.b;
}
