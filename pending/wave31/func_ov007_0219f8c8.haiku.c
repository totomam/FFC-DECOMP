#include "ffc/types.h"

extern uint8_t data_ov007_021c36f8[];
extern uint8_t data_ov007_021c3718[];
extern void func_ov007_021a04b4(void *p);
extern void func_02056bf4(void *a, void *b);
extern void func_020695d0(void *p);
extern void func_02054a88(void *p);

typedef void (*VFn)(void *);

void *func_ov007_0219f8c8(void *p)
{
    uint8_t *b = (uint8_t *)p;
    uint8_t *s;
    void *t;

    *(void **)b = data_ov007_021c36f8;
    *(void **)(b + 0xc) = data_ov007_021c3718;
    func_ov007_021a04b4(p);
    s = b + 0xc;
    func_02056bf4(s + 0x48, *(void **)(b + 0x140));
    t = *(void **)(b + 0x140);
    if (t != 0) {
        if (t != 0) {
            ((VFn *)*(void **)t)[1](t);
        }
        *(void **)((uint8_t *)p + 0x140) = 0;
    }
    t = *(void **)(b + 0x178);
    if (t != 0) {
        ((VFn *)*(void **)t)[1](t);
    }
    func_020695d0(b + 0xc);
    func_02054a88(p);
    return p;
}
