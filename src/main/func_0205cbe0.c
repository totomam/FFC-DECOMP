#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x28];
    uint32_t f28;
    uint32_t f2c;
} S;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_0205cbe0(S *p, Pair v) {
    p->f28 = v.a;
    p->f2c = v.b;
}
