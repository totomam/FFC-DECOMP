/* cflags: -lang c++ */
#include "ffc/types.h"
struct Vec2 { int32_t x; int32_t y; Vec2(){} ~Vec2(){} Vec2(const Vec2& o):x(o.x),y(o.y){} };
struct Rec { uint8_t pad[8]; Vec2 pos; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void getPos(Vec2 *o);
    virtual uint32_t conv(Vec2 d);
    uint8_t pad4[0x10];
    void *ptr14;
    uint16_t u18;
    uint16_t u1a;
    uint16_t u1c;
    uint16_t u1e;
    uint32_t u20;
    uint32_t u24;
    void run();
};
extern "C" {
void *func_ov003_021464f4(void *a, uint16_t b);
Rec *func_ov003_02155b40(void *a);
void func_ov003_0215abac(void *a, uint32_t b);
void func_ov003_0215aed0(void *a, int32_t x, int32_t y, uint16_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
void func_ov003_021494f0(Obj *p);
}
void func_ov003_021494f0(Obj *p) {
    void *r4 = func_ov003_021464f4(p->ptr14, p->u18);
    if (!r4) return;
    struct { uint32_t pad[8]; Vec2 d; Vec2 tmp; } L;
    p->getPos(&L.tmp);
    Rec *q = func_ov003_02155b40(r4);
    L.d.y = L.tmp.y - q->pos.y;
    L.d.x = L.tmp.x - q->pos.x;
    if (p->u1c == 0 || p->u1c == 2) {
        func_ov003_0215abac(r4, p->conv(L.d));
    }
    func_ov003_0215aed0(r4, L.tmp.x, L.tmp.y, p->u1a, p->u20, p->u1c, p->u1e, p->u24);
}
