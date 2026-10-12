/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_0208763c(void *p);
struct Flag { uint8_t b; };
void func_0200d5d4(void *a, void *b, Flag c);
void func_02087678(void *p);
}

struct Arr {
    uint32_t *data;
    uint32_t count;
    uint32_t cap;
};

struct Obj {
    uint32_t pad;
    Arr list;
    Arr sub;
};

struct Owner {
    uint32_t pad[4];
    Arr arr;
};

struct Guard {
    void *p;
    bool on;
    Guard(void *x) : p(x) {
        on = true;
        if (on) {
            func_0208763c(p);
        }
    }
    ~Guard() {
        if (on) {
            func_02087678(p);
        }
    }
};

extern "C" void func_02055ae8(Obj *obj, Owner *value, int, int) {
    Obj *o = obj;
    Guard g(&o->sub);
    Obj *q = obj;
    if (q->list.count < q->list.cap) {
        uint32_t n = ++q->list.count;
        q->list.data[n - 1] = (uint32_t)value;
    } else {
        Flag f; f.b = 0;
        func_0200d5d4(&o->list, &value, f);
    }
    if (value->arr.count < value->arr.cap) {
        uint32_t n = ++value->arr.count;
        value->arr.data[n - 1] = (uint32_t)obj;
    } else {
        Flag f; f.b = 0;
        func_0200d5d4(&value->arr, &obj, f);
    }
}
