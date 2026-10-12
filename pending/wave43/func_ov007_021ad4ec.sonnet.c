#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    void *d;
    uint32_t e;
} Tmp;

typedef struct {
    uint32_t x0;
    uint32_t x4;
    uint32_t x8;
} Obj;

extern uint32_t func_0206f250(Obj *p, uint32_t v);
extern void func_ov007_021ad5a8(Tmp *t, uint32_t v, uint32_t z);
extern void *func_020903cc();
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void func_ov007_021ad598(Tmp *t);

void func_ov007_021ad4ec(Obj *p, uint32_t len, uint8_t *q)
{
    Tmp t;
    uint32_t z = 0;
    uint32_t v;
    uint32_t old;
    uint32_t cur;

    t.a = 0;
    t.b = 0;
    t.c = 0;
    t.d = &p->x8;
    t.e = 0;

    v = func_0206f250(p, p->x4 + len - p->x8);
    func_ov007_021ad5a8(&t, v, z);

    t.e = p->x4;
    func_020903cc(t.a + t.e + t.b, *q, len);
    t.b += len;

    cur = p->x4;
    t.e = t.e - cur;
    func_02090380((uint8_t *)t.a + t.e, (void *)p->x0, cur);
    func_020903cc(p->x0, 0, cur);
    t.b += cur;

    p->x4 = 0;
    old = p->x8;
    p->x8 = t.c;
    t.c = old;
    old = p->x0;
    p->x0 = t.a;
    t.a = old;
    p->x4 = t.b;
    t.b = 0;
    func_ov007_021ad598(&t);
}
