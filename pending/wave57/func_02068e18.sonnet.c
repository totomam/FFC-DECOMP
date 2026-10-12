/* cflags: -lang c++ */
#include "ffc/types.h"

struct Tag { uint8_t c; };
extern "C" {
extern int func_0200c600(void *o);
extern void func_0200a7b0(void *o, void *b);
extern void func_02069024(void *object, void *e, Tag t);
extern uint32_t func_02062884(void *object);
}

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};
inline int diff(const Num &a, int b) { return a.v - b; }

struct Entry { uint32_t v0, v1, v2; };

struct Str {
    uint32_t flag:1;
    uint32_t size;
    uint16_t *ptr;
};

struct Vec { Entry *data; uint32_t count; uint32_t cap; };
struct Obj {
    uint8_t pad0[0x1c];
    void *f1c;
    void **vt20;
    uint32_t f24;
    uint8_t pad28[0xc];
    Vec vec;
    uint8_t sub[4];
};

inline void push(Vec &v, const Entry &e) {
    if (v.count < v.cap) {
        uint32_t *cp = &v.count;
        Entry *d = v.data;
        Entry &slot = d[(++*cp) - 1];
        slot = e;
    } else {
        Tag t;
        t.c = 0;
        func_02069024(&v, (void *)&e, t);
    }
}

inline uint16_t *sbegin(Str *s) {
    return s->flag ? s->ptr : (uint16_t *)((uint8_t *)s + 2);
}
inline uint16_t *send(Str *s) {
    uint16_t *q;
    uint32_t n;
    if (s->flag == 0) { q = (uint16_t *)((uint8_t *)s + 2); n = ((uint8_t *)s)[0] >> 1; }
    else { q = s->ptr; n = s->size; }
    return q + n;
}

typedef void (*VFn)(void *out, void *self, uint32_t v);

extern "C" void func_02068e18(Obj *a, Str *b) {
    if (func_0200c600(a->sub) != 0) return;
    func_0200a7b0(a->sub, b);
    int n = a->vec.count;
    a->vec.count = diff(n, n);
    int acc = 0;
    uint16_t *p;
    if (b->flag == 0) p = (uint16_t *)((uint8_t *)b + 2);
    else p = b->ptr;
    while (p != send(b)) {
        uint32_t tmp[2];
        Num ch(*p);
        ((VFn)(*(void ***)a->vt20)[3])(tmp, a->vt20, ch.v);
        Entry e;
        e.v0 = ch.v;
        e.v1 = acc;
        acc = a->f24 + (acc + tmp[0]);
        e.v2 = acc;
        push(a->vec, e);
        if (acc >= (int)func_02062884(a->f1c)) break;
        p++;
    }
    if (acc < (int)func_02062884(a->f1c)) {
        Entry e;
        e.v0 = 0;
        e.v1 = acc;
        e.v2 = func_02062884(a->f1c);
        push(a->vec, e);
    }
}
