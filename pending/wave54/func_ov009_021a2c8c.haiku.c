#include "ffc/types.h"

typedef struct Obj {
    void **vt;
} Obj;

typedef struct S4 { uint32_t a, b, c, d; } S4;

extern uint32_t data_ov009_021b0058[];
extern uint32_t data_020b8e44;
extern Obj *func_0203b95c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02015938(uint32_t x);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern uint32_t func_02056aec(void *owner);
extern uint32_t func_ov009_0219e428(uint32_t x);
extern uint32_t func_02062a78(Obj *obj, S4 s, uint32_t e, uint32_t f);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b708(uint32_t x);
extern void *func_02056b10(void *owner);

void func_ov009_021a2c8c(uint8_t *p)
{
    Obj *obj;
    uint32_t L[6];
    uint32_t r4, k, w, v, x, a, arg, t;
    void *f, *n, *b;
    uint32_t cnt;

    obj = func_0203b95c(data_ov009_021b0058[3], *(uint32_t *)(p + 0x88), 0, 1);
    arg = func_0206c184(func_02015938(data_020b8e44), 3) + 1;
    ((void (*)(Obj *, uint32_t, uint32_t))obj->vt[0x38 / 4])(obj, arg, 0);
    ((void (*)(Obj *, uint32_t))obj->vt[0x20 / 4])(obj, 2);
    ((void (*)(Obj *))obj->vt[0x28 / 4])(obj);
    r4 = 2;
    r4 += 0xfe;
    r4 = func_0206c184(func_02015938(data_020b8e44), r4);
    k = 0x1e;
    t = func_0206c184(func_02015938(data_020b8e44), k);
    L[0] = t;
    L[0] = t + 0x3c;
    L[1] = func_02056aec(obj);
    L[5] = 0xc8;
    k -= 0x26;
    L[2] = r4;
    L[3] = k;
    L[4] = r4;
    w = func_ov009_0219e428(L[0]);
    {
        S4 s;
        s.a = L[2];
        s.b = L[3];
        s.c = L[4];
        s.d = L[5];
        v = func_02062a78(obj, s, w, 0);
    }
    f = func_0203b688();
    func_02056bc0(f, (void *)v);
    func_02056bc0(f, (void *)L[1]);
    n = *(void **)(p + 0x84);
    func_02056bc0(n, f);
    func_02056bc0(n, obj);
    cnt = *(uint32_t *)(p + 0x8c);
    cnt = cnt - 1;
    *(uint32_t *)(p + 0x8c) = cnt;
    if (cnt != 0) {
        x = func_0203b708(5);
        func_02056bc0(p + 0x14, (void *)x);
        return;
    }
    a = func_02056aec(p);
    b = func_02056b10(*(void **)(p + 0x84));
    func_02056bc0(p + 0x14, b);
    func_02056bc0(p + 0x14, (void *)a);
}
