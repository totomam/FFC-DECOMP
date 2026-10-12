#include "ffc/types.h"

extern void func_ov002_021c5634(void *a, void *b);
extern void func_02068658(void *obj);
extern void func_020686a0(void *obj);
extern void func_02068514(void *obj, uint32_t v);
extern void func_02005988(void *out, void *src);
extern void func_020686e8(void *obj, void *v);
extern void *func_020059cc(void *object);

typedef struct {
    uint8_t pad[0xc];
    uint32_t flags;
} Obj;

void func_ov002_021c55d8(void *self, void *p)
{
    uint32_t buf[4];
    uint8_t *s = (uint8_t *)self;
    Obj *o;

    func_ov002_021c5634(self, p);

    func_02068658(*(void **)(s + 0xbc));
    func_020686a0(*(void **)(s + 0xbc));
    func_02068514(*(void **)(s + 0xbc), 0x2000);

    func_02005988(&buf[1], p);
    func_020686e8(*(void **)(s + 0xbc), &buf[1]);
    func_020059cc(&buf[1]);

    o = *(Obj **)(s + 0xbc);
    o->flags &= ~0xffu;
}
