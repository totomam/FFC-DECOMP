/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj { virtual void v0(); virtual void v1(); virtual uint32_t size(); virtual void set(uint32_t x); };
typedef struct { uint32_t a, b; } R;
extern "C" {
void func_0208763c(void *p);
void func_020553c4(void *p);
void func_020553e8(void *p);
uint32_t func_02056830(void);
void func_02056858(uint32_t x);
void *func_0205681c(uint32_t size);
void func_0206e38c(void *a, R r, uint32_t c, uint32_t d, uint8_t e);
void func_0206f3fc(void *arr, void *item);
void func_02087678(void *p);
void func_0206e2b4(void *, uint32_t, Obj *);
}
typedef struct { void *node; uint16_t id; } Elem;
typedef struct { uint8_t pad[0x4c]; Elem *arr; uint32_t count; uint32_t cap; } Owner;
typedef struct { void *ptr; volatile uint8_t owned; } Guard;
typedef struct {
    uint32_t arg1; uint32_t x;
    uint8_t b0, b1, b2; uint8_t pad3; uint32_t p0;
    R r; uint32_t c; uint32_t d;
    Elem e; Guard g;
} Frame;
void func_0206e2b4(void *self_, uint32_t arg1, Obj *p)
{
    Owner *self = (Owner *)self_;
    Frame f;
    uint32_t v;
    void *n;

    f.arg1 = arg1;
    f.g.ptr = (uint8_t *)self + 0x284;
    f.g.owned = 1;
    if (f.g.owned) func_0208763c(f.g.ptr);

    func_020553c4(p);
    v = p->size();
    f.x = func_02056830();
    p->set(f.x);

    n = func_0205681c(12);
    if (n != 0) {
        ((uint32_t *)n)[0] = 0;
        ((uint32_t *)n)[1] = 0;
        ((uint32_t *)n)[2] = 0;
        f.r.a = f.x;
        f.c = f.x + v;
        func_0206e38c(n, f.r, f.c, f.d, f.b2);
    }
    f.e.node = n;
    f.e.id = (uint16_t)f.arg1;
    if (self->count < self->cap) {
        uint32_t idx = self->count;
        self->count = idx + 1;
        self->arr[idx] = f.e;
    } else {
        func_0206f3fc(&self->arr, &f.e);
    }
    func_02056858(f.x);
    func_020553e8(p);
    if (f.g.owned) func_02087678(f.g.ptr);
}
