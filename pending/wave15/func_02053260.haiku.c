#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern uint32_t func_020529e4(S8 s);

uint32_t *func_02053260(uint32_t *p, S8 s)
{
    *p = func_020529e4(s);
    return p;
}
