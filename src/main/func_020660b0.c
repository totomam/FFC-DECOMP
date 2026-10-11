#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} func_020660b0_arg;

extern void func_02065f50(void *p, func_020660b0_arg s);
extern uint32_t data_020b1914[];

void *func_020660b0(void *p, func_020660b0_arg s)
{
    uint8_t *q;

    func_02065f50(p, s);
    q = (uint8_t *)p;
    *(uint32_t *)(q + 0x1c) = 0;
    *(void **)q = (void *)data_020b1914;
    *(uint8_t *)(q + 0x24) = 0;
    *(uint32_t *)(q + 0x20) = 0;
    *(uint32_t *)(q + 0x28) = 0;
    return p;
}
