#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020aea4c;

void func_0203a724(uint8_t *p)
{
    uint32_t n;
    uint32_t a;
    uint32_t b;

    *(uint32_t *)(p + 0x8c) = 0;
    n = func_0203b6f0();
    *(uint32_t *)(p + 0x90) = n;
    func_02056bc0(p + 0x48, (void *)n);
    a = data_020aea4c.a;
    b = data_020aea4c.b;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
}
