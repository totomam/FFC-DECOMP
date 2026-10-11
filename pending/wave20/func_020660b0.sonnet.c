#include "ffc/types.h"

extern void func_02065f50(void *self, uint32_t a, uint32_t b);
extern uint8_t data_020b1914[];

typedef struct { uint32_t a, b; } Pair;

void *func_020660b0(void *p, Pair s)
{
    uint8_t *r4 = (uint8_t *)p;
    uint32_t *q = (uint32_t *)&s;
    uint32_t a, b;

    a = *q++;
    b = *q++;
    func_02065f50(p, a, b);
    *(uint32_t *)(r4 + 0x1c) = 0;
    *(uint8_t **)(r4 + 0) = data_020b1914;
    *(uint8_t *)(r4 + 0x24) = 0;
    *(uint32_t *)(r4 + 0x20) = 0;
    *(uint32_t *)(r4 + 0x28) = 0;
    return p;
}
