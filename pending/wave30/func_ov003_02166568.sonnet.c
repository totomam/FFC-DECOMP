#include "ffc/types.h"

extern void func_020424e0(void *);
extern void func_ov003_0214dda8(void);
extern void *func_02056aec(void);
extern void *func_ov003_0214de14(void);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint8_t pad0[0xc];
    uint32_t flags;
    uint8_t list[0x80 - 0x10];
    void *h80;
    uint8_t *h84;
    uint8_t b88;
} O;

void func_ov003_02166568(O *o)
{
    *o->h84 = o->b88;
    if (o->b88 != 0) {
        func_020424e0(o->h80);
        func_ov003_0214dda8();
        o->flags = (o->flags & ~0xffu) | 2u;
        return;
    }
    {
    void *r4 = func_02056aec();
    func_020424e0(o->h80);
    {
    void *n = func_ov003_0214de14();
    uint8_t *l = (uint8_t *)o + 0x14;
    func_02056bc0(l, n);
    func_02056bc0(l, r4);
    }
    }
}
