/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern uint8_t data_ov007_021c36f8[];
extern uint8_t data_ov007_021c3718[];
void func_ov007_021a04b4(void *p);
void func_02056bf4(void *a, void *b);
void func_020695d0(void *p);
void func_02054a88(void *p);
}

struct Sub {
    uint8_t pad[0x48];
    uint8_t f;
    void *get() { return &f; }
};
struct Obj {
    void *vt;
    uint8_t pad[8];
    Sub sub;
};

typedef void (*VFn)(void *);

extern "C" void *func_ov007_0219f8c8(void *p)
{
    uint8_t *b = (uint8_t *)p;
    void *t;
    *(void **)b = data_ov007_021c36f8;
    *(void **)(b + 0xc) = data_ov007_021c3718;
    func_ov007_021a04b4(p);
    func_02056bf4(((Sub *)(b + 0xc))->get(), *(void **)(b + 0x140));
    t = *(void **)(b + 0x140);
    if (t != 0) {
        if (t != 0) {
            ((VFn *)*(void **)t)[1](t);
        }
        *(void **)(b + 0x140) = 0;
    }
    t = *(void **)(b + 0x178);
    if (t != 0) {
        ((VFn *)*(void **)t)[1](t);
    }
    func_020695d0(b + 0xc);
    func_02054a88(p);
    return p;
}
