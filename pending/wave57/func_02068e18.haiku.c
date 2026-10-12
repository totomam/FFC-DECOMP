/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern int func_0200c600(void *o);
extern void func_0200a7b0(void *o, void *b);
extern void func_02069024(void *object, uint32_t value);
extern uint32_t func_02062884(void *object);
}

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

typedef struct {
    uint32_t v0;
    uint32_t v1;
    uint32_t v2;
} Entry;

typedef struct {
    uint8_t pad0[0x1c];
    void *f1c;
    void *vt20;
    uint32_t f24;
    uint8_t pad28[0xc];
    Entry *arr34;
    uint32_t count38;
    uint32_t cap3c;
    uint8_t sub[4];
} Obj;

typedef void (*VFn)(void *out, void *self, uint32_t v);

extern "C" void func_02068e18(Obj *a, uint8_t *b) {
    uint16_t *p;
    uint16_t *end;
    uint32_t acc;
    uint32_t tmp;
    Entry e;
    void *obj;
    VFn fn;

    if (func_0200c600(a->sub) != 0) {
        return;
    }
    func_0200a7b0(a->sub, b);
    {
        int n = a->count38;
        a->count38 = diff(n, n);
    }
    acc = 0;
    if (b[0] & 1) {
        p = *(uint16_t **)(b + 8);
        end = p + *(uint32_t *)(b + 4);
    } else {
        p = (uint16_t *)(b + 2);
        end = p + ((b[0] >> 1) & 0x7f);
    }
    while (p != end) {
        obj = a->vt20;
        fn = (VFn)((uint32_t *)(*(uint32_t *)obj))[3];
        fn(&tmp, obj, *p);
        e.v0 = *p;
        e.v1 = acc;
        acc = a->f24 + (acc + tmp);
        e.v2 = acc;
        if (a->count38 < a->cap3c) {
            a->arr34[a->count38] = e;
            a->count38++;
        } else {
            func_02069024(&a->arr34, e.v0);
        }
        if ((int32_t)acc >= (int32_t)func_02062884(a->f1c)) {
            break;
        }
        p++;
    }
    if ((int32_t)acc >= (int32_t)func_02062884(a->f1c)) {
        return;
    }
    e.v0 = 0;
    e.v1 = acc;
    e.v2 = func_02062884(a->f1c);
    if (a->count38 < a->cap3c) {
        a->arr34[a->count38] = e;
        a->count38++;
    } else {
        func_02069024(&a->arr34, 0);
    }
}
