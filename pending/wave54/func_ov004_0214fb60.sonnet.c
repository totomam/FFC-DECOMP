/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" int32_t data_ov004_02159448[];
extern "C" void *func_0203b95c(void *a, void *b, int32_t c, int32_t d);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void func_ov004_02152340(void *dst, void *begin, void *end, uint8_t flag);
extern "C" void func_ov004_02152398(void *dst, void *begin, void *end, uint8_t flag);
extern "C" void func_ov004_02151f5c(void *arr, void *rec, uint8_t flag);
extern "C" void func_0200d5ec(void *v);
extern "C" void func_ov004_02148680(void *v);

typedef struct {
    void *begin;
    uint32_t n;
    uint32_t cap;
} Vec;

typedef struct {
    int32_t a, b, v0, v1, v2, v3;
    void *obj;
    int32_t z1[3];
    int32_t z2[3];
    uint8_t fl[4];
} Elem;

typedef struct { int32_t a; int32_t b; } S2;
inline int32_t cA(S2 q){ return (q.a+2)>>2; }
inline int32_t cB(S2 q){ return (q.b+4)>>3; }

extern "C" void func_ov004_0214fb60(uint8_t *p, S2 s)
{
    S2 *ps = &s;
    int32_t a = ps->a;
    int32_t b = ps->b;
    Vec v1 = {0, 0, 0};
    Vec v2 = {0, 0, 0};
    Elem rec;
    uint8_t f0;
    void *obj;
    void **vt;
    uint32_t cnt, cap;
    Elem *e;
    int32_t *d = data_ov004_02159448;

    rec.z1[0] = 0; rec.z1[1] = 0; rec.z1[2] = 0;
    rec.z2[0] = 0; rec.z2[1] = 0; rec.z2[2] = 0;
    rec.fl[0] = 0; rec.fl[1] = 0; rec.fl[2] = 0; rec.fl[3] = 0;
    rec.a = a;
    rec.b = b;
    rec.v0 = cA(s) + d[0x11];
    rec.v1 = cB(s) + d[0x12];
    {
        int32_t t = a - ((b & 8) >> 1);
        rec.v2 = ((t + (((t >> 2) & 0xffffffffu) >> 29)) >> 3) + d[0x0d];
    }
    rec.v3 = ((b + (((b >> 2) & 0xffffffffu) >> 29)) >> 3) + d[0x0e];

    obj = func_0203b95c(d + 3, *(void **)(p + 0xe0), 0, 1);
    vt = *(void ***)obj;
    ((void (*)(void *, S2))vt[3])(obj, *ps);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);

    func_02056bc0(*(void **)(p + 0x138), obj);

    cnt = *(uint32_t *)(p + 0x110);
    cap = *(uint32_t *)(p + 0x114);
    if (cnt < cap) {
        e = (Elem *)((uint8_t *)*(void **)(p + 0x10c) + cnt * 0x38);
        if (e != 0) {
            e->a = rec.a;
            e->b = rec.b;
            e->v0 = rec.v0;
            e->v1 = rec.v1;
            e->v2 = rec.v2;
            e->v3 = rec.v3;
            e->obj = obj;
            e->z1[0] = 0; e->z1[1] = 0; e->z1[2] = 0;
            func_ov004_02152340(e->z1, v1.begin, (uint8_t *)v1.begin + v1.n * 8, f0);
            e->z2[0] = 0; e->z2[1] = 0; e->z2[2] = 0;
            func_ov004_02152398(e->z2, v2.begin, (uint8_t *)v2.begin + v2.n * 4, f0);
            e->fl[0] = rec.fl[0];
            e->fl[1] = rec.fl[1];
            e->fl[2] = rec.fl[2];
            e->fl[3] = rec.fl[3];
        }
        *(uint32_t *)(p + 0x110) = *(uint32_t *)(p + 0x110) + 1;
    } else {
        f0 = 0;
        func_ov004_02151f5c(p + 0x10c, &rec, f0);
    }

    func_0200d5ec(&v2);
    func_ov004_02148680(&v1);
}
