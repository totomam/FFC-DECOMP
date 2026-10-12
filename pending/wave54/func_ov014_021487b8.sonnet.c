#include "ffc/types.h"

typedef struct {
    union {
        struct { uint32_t fl:1; } w;
        struct { uint8_t fl:1; uint8_t len:7; } b;
    } u;
    uint32_t sz;
    uint32_t ptr;
} Str;
typedef struct { uint8_t b[4]; Str h; } HH;

extern void func_ov014_02148988(Str *o, void *p);
extern void func_02005988(void *p, void *data);
extern int32_t func_02030f04(Str *o, void *p, int32_t prev);
extern void func_02005af4(Str *o, int32_t id, uint32_t val, uint32_t z1, uint32_t z2, uint8_t ch);
extern void func_02005f3c(Str *o, int32_t id, uint32_t z, void *data);
extern void func_020059cc(void *o);
extern int32_t func_ov014_021489e4(Str *o, void *data, int32_t def);
extern int32_t func_02087460(void);
extern uint32_t func_02008f2c(void *o, Str *src, uint32_t off, uint32_t len);
extern void func_ov014_02148934(Str *dst, void *src);
extern uint32_t func_02093b18(void *v);
extern void func_ov014_021489cc(void *o);
extern uint8_t data_ov014_02155af0[];
extern uint8_t data_ov014_02155aec[];
extern uint8_t data_ov014_02155af4[];
extern uint8_t data_ov014_02155af8[];

uint32_t func_ov014_021487b8(void *p)
{
    Str o;
    Str s2;
    Str s1;
    HH hh;
    uint8_t t;
    int32_t id;
    int32_t z;
    int32_t r;
    int32_t n;
    int32_t c;
    uint32_t v;
    uint32_t r6;

    r6 = (uint32_t)-1;
    func_ov014_02148988(&o, p);
    func_02005988(&hh.h, data_ov014_02155af0);
    t = hh.b[3];
    id = 0;
    z = id;
    for (;;) {
        id = func_02030f04(&o, &hh.h, id);
        if (id == (int32_t)r6) {
            break;
        }
        if (hh.h.u.w.fl == 0) {
            v = hh.h.u.b.len;
        } else {
            v = hh.h.sz;
        }
        func_02005af4(&o, id, v, z, z, t);
        func_02005f3c(&o, id, z, data_ov014_02155aec);
    }
    func_020059cc(&hh.h);

    r = func_ov014_021489e4(&o, data_ov014_02155aec, -1);
    if (r != -1) {
        func_02005af4(&o, 0, (uint32_t)r, 0, 0, hh.b[2]);
    }
    r = func_ov014_021489e4(&o, data_ov014_02155af4, -1);
    if (r != -1) {
        func_02005af4(&o, r, (uint32_t)-1, 0, 0, hh.b[1]);
    }
    if (func_02087460()) {
        r = func_ov014_021489e4(&o, data_ov014_02155af8, -1);
        if (r != -1) {
            func_02005af4(&o, r, (uint32_t)-1, 0, 0, hh.b[0]);
        }
    }

    c = (o.u.w.fl == 0) ? 1 : 0;
    if (c) {
        n = o.u.b.len;
    } else {
        n = (int32_t)o.sz;
    }
    if (n >= 3) {
        func_02008f2c(&s1, &o, (uint32_t)(c ? o.u.b.len - 3 : o.sz - 3), 3);
        func_ov014_02148934(&s2, &s1);
        func_020059cc(&s1);
        if (s2.u.w.fl == 0) {
            r6 = func_02093b18((char *)&s2 + 1);
        } else {
            r6 = func_02093b18((void *)s2.ptr);
        }
        if (r6 == 0) {
            r6 = (uint32_t)-1;
        }
        func_ov014_021489cc(&s2);
    }
    func_ov014_021489cc(&o);
    return r6;
}
