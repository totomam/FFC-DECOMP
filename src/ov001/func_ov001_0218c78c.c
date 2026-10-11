#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint8_t *data_020b8e44;
extern Pair data_ov001_0219489c;

void func_ov001_0218c78c(uint8_t *obj)
{
    *(uint32_t *)(obj + 0xb8) = data_020b8e44[0xc];
    *(Pair *)(obj + 0xb0) = data_ov001_0219489c;
}
