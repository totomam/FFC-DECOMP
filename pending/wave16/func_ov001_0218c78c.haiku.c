#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *data_020b8e44;
extern Pair data_ov001_0219489c;

void func_ov001_0218c78c(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    *(uint32_t *)(obj + 0xb8) = ((uint8_t *)data_020b8e44)[0xc];
    {
        uint32_t x = data_ov001_0219489c.a;
        uint32_t y = data_ov001_0219489c.b;
        *(uint32_t *)(obj + 0xb0) = x;
        *(uint32_t *)(obj + 0xb4) = y;
    }
}
