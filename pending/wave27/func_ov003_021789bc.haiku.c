#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);

typedef void (*VFn)(void *);

void func_ov003_021789bc(uint8_t *p) {
    void *o = *(void **)(p + 0x88);
    if (!o) return;
    {
        VFn *vt = *(VFn **)o;
        vt[11](o);
    }
    func_02056bf4(p + 0x48, *(void **)(p + 0x88));
    o = *(void **)(p + 0x88);
    if (!o) return;
    if (o) {
        VFn *vt = *(VFn **)o;
        vt[1](o);
    }
    *(void **)(p + 0x88) = 0;
}
