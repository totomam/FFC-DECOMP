#include "ffc/types.h"

typedef struct { uint8_t f; uint8_t p[3]; uint32_t cnt; } Obj;
typedef struct { uint8_t a0, a1, a2, a3; uint32_t w; uint32_t w2; } Hdr;
typedef struct { uint8_t f; uint8_t b[7]; uint32_t w; } Sub;

extern void func_ov014_02148988(Obj *o, void *p);
extern void func_02005988(void *p, void *data);
extern int32_t func_02030f04(Obj *o, void *p, int32_t prev);
extern void func_02005af4(Obj *o, int32_t id, uint32_t val, uint32_t z1, uint32_t z2, uint8_t ch);
extern void func_02005f3c(Obj *o, int32_t id, uint32_t z, void *data);
extern void func_020059cc(void *o);
extern int32_t func_ov014_021489e4(Obj *o, void *data, int32_t def);
extern int32_t func_02087460(void);
extern uint32_t func_02008f2c(void *o, Obj *src, uint32_t off, uint32_t len);
extern void func_ov014_02148934(Sub *dst, void *src);
extern uint32_t func_02093b18(void *v);
extern void func_ov014_021489cc(void *o);
extern uint8_t data_ov014_02155af0[];
extern uint8_t data_ov014_02155aec[];
extern uint8_t data_ov014_02155af4[];
extern uint8_t data_ov014_02155af8[];

uint32_t func_ov014_021487b8(void *p)
{
    Obj o;
    Sub s2;
    Sub s1;
    Hdr h;
    uint32_t t;
    int32_t id;
    int32_t prev;
    int32_t r;
    int32_t n;
    int32_t c;
    uint32_t v;
    uint32_t r6;

    r6 = (uint32_t)-1;
    func_ov014_02148988(&o, p);
    func_02005988(&h.w, data_ov014_02155af0);
    t = h.a3;
    prev = 0;
    for (;;) {
        id = func_02030f04(&o, &h.w, prev);
        if (id == (int32_t)r6) {
            break;
        }
        if (h.w & 1) {
            v = h.w2;
        } else {
            v = ((h.w & 0xff) >> 1) & 0x7f;
        }
        func_02005af4(&o, id, v, 0, 0, t);
        func_02005f3c(&o, id, 0, data_ov014_02155aec);
        prev = id;
    }
    func_020059cc(&h.w);

    r = func_ov014_021489e4(&o, data_ov014_02155aec, -1);
    if (r != -1) {
        func_02005af4(&o, 0, (uint32_t)r, 0, 0, h.a2);
    }
    r = func_ov014_021489e4(&o, data_ov014_02155af4, -1);
    if (r != -1) {
        func_02005af4(&o, r, (uint32_t)-1, 0, 0, h.a1);
    }
    if (func_02087460()) {
        r = func_ov014_021489e4(&o, data_ov014_02155af8, -1);
        if (r != -1) {
            func_02005af4(&o, r, (uint32_t)-1, 0, 0, h.a0);
        }
    }

    c = (o.f & 1) ? 0 : 1;
    if (c) {
        n = (o.f >> 1) & 0x7f;
    } else {
        n = (int32_t)o.cnt;
    }
    if (n >= 3) {
        func_02008f2c(&s1, &o, (uint32_t)(n - 3), 3);
        func_ov014_02148934(&s2, &s1);
        func_020059cc(&s1);
        if (s2.f & 1) {
            r6 = func_02093b18((void *)s2.w);
        } else {
            r6 = func_02093b18((void *)&s2.b[0]);
        }
        if (r6 == 0) {
            r6 = (uint32_t)-1;
        }
        func_ov014_021489cc(&s2);
    }
    func_ov014_021489cc(&o);
    return r6;
}
