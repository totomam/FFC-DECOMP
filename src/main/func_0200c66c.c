#include "ffc/types.h"

typedef struct { uint32_t v; } S;
extern void func_02068580(uint32_t a, S b);

void func_0200c66c(uint8_t *p, S s, ...) {
    *(uint32_t *)(p + 0xd0) = s.v;
    func_02068580(*(uint32_t *)(p + 0x94), s);
}
