#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);
extern void func_02054218(void *p);
extern void func_02054380(void);

typedef void (*VFn)(void *self);

void func_ov013_021bd420(uint8_t *p) {
    uint8_t *q;
    uint8_t *e;
    void *f8;

    if (*(void **)(p + 0xf4) == 0) {
        return;
    }
    f8 = *(void **)(p + 0xf8);
    q = p + 0x48;
    func_02056bf4(q, *(void **)(p + 0xf4));
    func_02056bf4(q, f8);
    if (*(void **)(p + 0xf8) != 0) {
        void *o = *(void **)(p + 0xf8);
        ((VFn)((void **)*(void **)o)[1])(o);
    }
    if (*(void **)(p + 0xf4) != 0) {
        void *o = *(void **)(p + 0xf4);
        ((VFn)((void **)*(void **)o)[1])(o);
    }
    e = p + 0xf4;
    *(void **)(p + 0xf8) = 0;
    *(void **)e = 0;
    func_02054218(p);
    func_02054380();
}
