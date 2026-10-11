#include "ffc/types.h"

typedef struct { uint32_t lo; uint32_t hi; } S8;
typedef uint32_t (*VFn)(void *, uint32_t, int32_t, S8, uint32_t, uint32_t, uint32_t);

uint32_t func_020663b0(uint8_t *a, void *b, ...)
{
    uint32_t *ap = (uint32_t *)&b;
    uint32_t c = ap[1];
    uint32_t d = ap[2];
    uint32_t e = ap[3];
    S8 t = *(S8 *)(a + 0x34);
    void **vt = *(void ***)b;
    VFn f = (VFn)vt[9];
    return f(b, *(uint32_t *)(a + 0x2c), 0, t, c, d, e);
}
