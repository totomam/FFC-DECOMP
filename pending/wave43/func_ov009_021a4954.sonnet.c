#include "ffc/types.h"

extern void func_02056bf4(void *object);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02005858(void *obj, uint32_t a, const void *b, uint32_t c, uint32_t d);
extern void func_0205f2f0(void *object, uint32_t value);

extern void func_0205f3e0(void *object, uint32_t value);
extern void func_0205f498(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;
extern uint8_t data_ov009_021b0c14[];
typedef struct { uint32_t a, b; } P2;
extern P2 data_ov009_021b0824;
extern void func_0205f52c(void *object, P2 v);
typedef struct { void **vt; } Obj;

void func_ov009_021a4954(void *p)
{
    uint8_t *a = (uint8_t *)p;
    Obj *r4;
    Obj *o;
    Obj *q = *(Obj **)(a + 0xcc);

    if (q != 0) {
        func_02056bf4(a + 0x48);
        o = *(Obj **)(a + 0xcc);
        if (o != 0) {
            if (o != 0) {
                ((void (*)(Obj *))o->vt[1])(o);
            }
            *(Obj **)(a + 0xcc) = 0;
        }
    }

    r4 = func_0205681c(0x54);
    if (r4 != 0) {
        r4 = func_02005858(r4, func_0204f7ec(data_0213df18), data_ov009_021b0c14, 1, 0);
    }
    *(Obj **)(a + 0xcc) = r4;

    func_0205f2f0(*(void **)(*(uint8_t **)((uint8_t *)r4 + 0x50) + 0x94), 1);
    func_0205f52c(*(void **)(*(uint8_t **)(*(uint8_t **)(a + 0xcc) + 0x50) + 0x94),
                  data_ov009_021b0824);
    func_0205f3e0(*(void **)(*(uint8_t **)(*(uint8_t **)(a + 0xcc) + 0x50) + 0x94), 3);
    func_0205f498(*(void **)(*(uint8_t **)(*(uint8_t **)(a + 0xcc) + 0x50) + 0x94));

    func_02056bc0(a + 0x48, *(void **)(a + 0xcc));
}
