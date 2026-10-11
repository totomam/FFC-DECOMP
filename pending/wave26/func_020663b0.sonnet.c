#include "ffc/types.h"

typedef struct { uint32_t lo; uint32_t hi; } S8;
typedef uint32_t (*VFn)(void *, uint32_t, int32_t, S8, S8, uint32_t);

uint32_t func_020663b0(uint8_t *a, void *b, S8 u, uint32_t e)
{
    void **vt = *(void ***)b;
    VFn f = (VFn)vt[9];
    return f(b, *(uint32_t *)(a + 0x2c), 0, *(S8 *)(a + 0x34), u, e);
}
