#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov001_0218dff4(void *p);
extern void *func_020903cc(void *object, uint32_t a, uint32_t b);
extern uint32_t data_ov007_021c6028[];
extern Pair data_ov007_021c606c;

void *func_ov007_021b2590(uint8_t *self, uint32_t unused, uint32_t arg)
{
    func_ov001_0218dff4(self);
    *(uint32_t **)self = data_ov007_021c6028;
    *(uint32_t *)(self + 0xb0) = arg;
    *(uint8_t *)(self + 0xb4) = 0;
    *(uint8_t *)(self + 0xb5) = 0;
    *(uint32_t *)(self + 0xb8) = 0;
    *(uint32_t *)(self + 0xfc) = 0;
    *(uint32_t *)(self + 0x100) = 0;
    *(uint32_t *)(self + 0x104) = 0;
    *(uint32_t *)(self + 0x2d0c) = 0;
    *(uint32_t *)(self + 0x2d10) = 0;
    func_020903cc(self + 0xbc, 0, 0x40);
    Pair p = data_ov007_021c606c;
    *(Pair *)(self + 0x3114) = p;
    return self;
}
