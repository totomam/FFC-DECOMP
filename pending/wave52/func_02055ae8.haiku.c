/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_0208763c(void *p);
void func_0200d5d4(void *a, void *b, uint32_t c);
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
    uint32_t a;
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

extern "C" void func_02055ae8(Obj *obj, Owner *value) {
    Guard g(&obj->sub);
    if (obj->list.count < obj->list.cap) {
        uint32_t idx = obj->list.count;
        obj->list.count = idx + 1;
        obj->list.data[idx] = (uint32_t)value;
    } else {
        func_0200d5d4(&obj->list, &value, 0);
    }
    if (value->arr.count < value->arr.cap) {
        uint32_t idx = value->arr.count;
        value->arr.count = idx + 1;
        value->arr.data[idx] = (uint32_t)obj;
    } else {
        func_0200d5d4(&value->arr, &obj, 0);
    }
}
