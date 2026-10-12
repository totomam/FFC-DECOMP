/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02058048(void *a, void *b, uint32_t c);
extern "C" void func_02087678(void *p);

struct Obj;
typedef struct Vt {
    void *f0;
    void (*f1)(struct Obj *);
} Vt;
typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct {
    void *v;
    volatile uint8_t f;
} Tmp;

struct V { virtual void f0(); virtual void f1(); };
extern "C" void func_02059a78(void *a, void *bb) {
    V *b = (V*)bb;
    uint8_t *self = (uint8_t *)a;
    Tmp t;
    uint32_t i;

    t.v = (uint8_t *)*(void **)(self + 0x10) + 0x20;
    t.f = 1;
    if (t.f) {
        func_0208763c(t.v);
    }
    for (i = 0; i < 4; i++) {
        if (*(void **)(self + 0x24 + i * 4) == b) {
            break;
        }
    }
    func_02058048(*(void **)(self + 0x10), *(void **)((uint8_t *)b + 4), 0);
    *(void **)(self + 0x24 + i * 4) = 0;
    if (b != 0) {
        b->f1();
    }
    if (t.f) {
        func_02087678(t.v);
    }
}
