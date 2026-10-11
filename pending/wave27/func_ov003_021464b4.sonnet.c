#include "ffc/types.h"

extern void func_02056bf4(void *p);

typedef struct { void (**vt)(void *); } O;

void func_ov003_021464b4(uint8_t *s)
{
    if (*(O **)(s + 0x1b0) != 0 && *(uint32_t *)(s + 0x1d8) == 0) {
        O *o;
        func_02056bf4(s + 0x48);
        o = *(O **)(s + 0x1b0);
        if (o != 0) {
            if (o != 0) {
                o->vt[1](o);
            }
            *(O **)(s + 0x1b0) = 0;
        }
    }
}
