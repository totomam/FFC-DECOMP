#include "ffc/types.h"

extern void func_02061360(void *self);

typedef struct Obj Obj;
struct Obj {
    void **vtbl;
};

typedef struct Owner {
    uint8_t pad[0x18];
    Obj **begin;
    uint32_t count;
} Owner;

void func_02061a4c(Owner *s, void *arg) {
    Obj **p;

    func_02061360(s);
    p = s->begin;
    while (p != s->begin + s->count) {
        void (*fn)(Obj *, void *) = (void (*)(Obj *, void *))((*p)->vtbl[5]);
        fn(*p, arg);
        p++;
    }
}
