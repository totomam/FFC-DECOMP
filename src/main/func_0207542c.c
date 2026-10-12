#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_020731cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020b26d8;

void func_0207542c(uint8_t *obj)
{
    uint32_t z0 = 0;
    uint32_t z1 = 0;
    uint8_t *p = *(uint8_t **)(obj + 0x88);
    uint32_t r = func_020731cc(*(uint32_t *)(p + 0x2c), *(uint32_t *)(obj + 0x8c),
                               *(uint32_t *)(obj + 0x90), *(uint32_t *)(obj + 0x94), z0, z1);
    func_02056bc0(obj + 0x14, (void *)r);
    *(Pair *)(obj + 0x80) = data_020b26d8;
}
