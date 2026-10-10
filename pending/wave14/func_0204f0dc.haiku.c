#include "ffc/types.h"

typedef struct { uint32_t pad[3]; uint32_t lo : 8; uint32_t f : 5; uint32_t hi : 19; } S;

void func_0204f0dc(S *p, uint32_t x) {
    p->f |= x;
}
