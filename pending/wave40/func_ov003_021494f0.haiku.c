#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;
typedef struct { uint8_t pad[8]; Vec2 pos; } Rec;

typedef struct Obj {
    void **vt;
    uint8_t pad4[0x10];
    void *ptr14;
    uint16_t u18;
    uint16_t u1a;
    uint16_t u1c;
    uint16_t u1e;
    uint32_t u20;
    uint32_t u24;
} Obj;

extern void *func_ov003_021464f4(void *a, uint16_t b);
extern Rec *func_ov003_02155b40(void *a);
extern void func_ov003_0215abac(void *a, uint32_t b);
extern void func_ov003_0215aed0(void *a, int32_t x, int32_t y, uint16_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

void func_ov003_021494f0(Obj *p) {
    Vec2 tmp;
    Vec2 d;
    void *r4;
    Rec *q;

    r4 = func_ov003_021464f4(p->ptr14, p->u18);
    if (r4 == 0) {
        return;
    }
    ((void (*)(Vec2 *, Obj *))p->vt[4])(&tmp, p);
    q = func_ov003_02155b40(r4);
    d.y = tmp.y - q->pos.y;
    d.x = tmp.x - q->pos.x;
    if (p->u1c == 0 || p->u1c == 2) {
        uint32_t v = ((uint32_t (*)(Obj *, Vec2))p->vt[5])(p, d);
        func_ov003_0215abac(r4, v);
    }
    func_ov003_0215aed0(r4, tmp.x, tmp.y, p->u1a, p->u20, p->u1c, p->u1e, p->u24);
}
