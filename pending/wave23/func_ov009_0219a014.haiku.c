#include "ffc/types.h"

typedef struct Vt {
    uint32_t pad[11];
    void (*fn)(void *);
} Vt;

void func_ov009_0219a014(uint8_t *p)
{
    void *o;

    o = *(void **)(p + 0x90);
    if (o != 0) {
        Vt *vt = *(Vt **)o;
        vt->fn(o);
    }

    o = *(void **)(p + 0x88);
    if (o != 0) {
        Vt *vt = *(Vt **)o;
        vt->fn(o);
    }

    *(uint8_t *)(p + 0xa1) = 0;
}
