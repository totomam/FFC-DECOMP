/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { uint32_t a; uint32_t b; };
struct Obj2;
extern "C" {
extern void func_02021338(uint32_t x);
extern void func_02056bf4(void *object);
extern void *func_0203bc04(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov011_021c9418(void *object, uint32_t state);
extern uint32_t func_ov011_021c95a8(void *object, Pair d, uint32_t state);
extern void *func_0203b720(void);
extern const Pair data_ov011_021cbd9c;
void func_ov011_021c94bc(void *obj, int state);
}

struct Obj2 {
    virtual ~Obj2() {}
    virtual void v2() {}
    virtual void v3(Pair p) {}
    virtual void v4() {}
    virtual void v5() {}
    virtual void v6() {}
    virtual void v7() {}
    virtual void v8(int) {}
    virtual void v9() {}
    virtual void v10() {}
};

struct Z { int v; Z(int x) : v(x) {} ~Z() {} };

extern "C" void func_ov011_021c94bc(void *obj, int state)
{
    uint8_t *p = (uint8_t *)obj;
    int r6;
    int cur;

    if (state > 4) return;
    cur = *(int *)(p + 0x3b0);
    r6 = 0;
    if (cur == 6) r6 = 1;
    if (cur == state) return;
    *(int *)(p + 0x3b0) = state;
    if (!r6) func_02021338(0xb7);
    Obj2 *m = *(Obj2 **)(p + 0xe4);
    if (m != 0) {
        func_02056bf4(p + 0x48);
        Obj2 *n = *(Obj2 **)(p + 0xe4);
        if (n != 0) { delete n;
        *(Obj2 **)(p + 0xe4) = 0; }
    }
    Z z(0);
    *(void **)(p + 0xe4) = func_0203bc04(*(void **)(p + 0xe8 + (state << 2)), 1, 0, z.v);
    func_02056bc0(p + 0x48, *(void **)(p + 0xe4));
    (*(Obj2 **)(p + 0xe4))->v10();
    (*(Obj2 **)(p + 0xe4))->v8(2);
    Pair s; s.a = z.v; s.b = 0xa0;
    (*(Obj2 **)(p + 0xe4))->v3(s);
    if (r6) { func_ov011_021c9418(obj, state); return; }
    uint32_t r4 = func_ov011_021c95a8(obj, data_ov011_021cbd9c, state);
    void *t = func_0203b720();
    uint8_t *q = p + 0x14;
    func_02056bc0(q, t);
    func_02056bc0(q, (void *)r4);
}
