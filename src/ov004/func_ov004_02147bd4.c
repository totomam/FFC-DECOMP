#include "ffc/types.h"

typedef struct { uint32_t v; } S;
extern void func_02068580(uint32_t a, S b);

void func_ov004_02147bd4(uint8_t *p, S s, ...) {
    *(uint32_t *)(p + 0xe8) = s.v;
    func_02068580(*(uint32_t *)(p + 0xd8), s);
}
