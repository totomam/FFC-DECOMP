#include "ffc/types.h"

extern uint32_t func_0209a978(void *p, uint32_t x);

typedef void (*VFn)(void *self, int a, int b);
typedef struct VT { uint8_t pad[0x38]; VFn m; } VT;

void func_ov007_021a7a90(uint8_t *self)
{
    void **o;
    VT *vt;
    int r;

    func_0209a978(*(void **)(self + 0xec), 10);
    o = *(void ***)(self + 0xe4);
    vt = (VT *)*o;
    vt->m(o, 11, 0);

    r = func_0209a978(*(void **)(self + 0xec), 10);
    o = *(void ***)(self + 0xe8);
    vt = (VT *)*o;
    vt->m(o, r + 1, 0);
}
