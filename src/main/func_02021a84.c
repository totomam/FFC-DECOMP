#include "ffc/types.h"

extern void func_020095b8(void *object);
extern void *func_0205323c(void *object, void *src);
extern void *func_020059cc(void *object);
extern void func_0201506c(void *object, void *const *source, uint32_t value);
extern void func_02052d3c(void *p, uint32_t q);
extern void func_02052c04(void *p);
extern void func_02052be0(void *p);
extern void func_02052d10(void *p, uint32_t q);
extern void func_02052c94(void *p, uint32_t q);
extern void *func_02052d90(const void *mar, uint32_t index);

typedef struct {
    void *p;
    uint32_t q;
    uint8_t f;
} Slot;

typedef struct {
    uint32_t head;
    void *p;
    uint32_t q;
    uint8_t f;
} Obj;

void *func_02021a84(Obj *self) {
    Slot tmp0;
    Slot t;
    void *tp;

    func_020095b8(&tmp0);
    func_0205323c(self, &tmp0);
    func_020059cc(&tmp0);
    self->p = 0;
    self->f = 0;
    func_0201506c(&t, (void *const *)self, 0);
    if ((void *)&t != (void *)&self->p) {
        if (self->p) {
            if (self->f) {
                func_02052d3c(self->p, self->q);
            }
            func_02052c04(self->p);
        }
        tp = t.p;
        self->p = tp;
        self->q = t.q;
        self->f = t.f;
        if (tp) {
            func_02052be0(tp);
            if (self->f) {
                func_02052d10(self->p, self->q);
            }
        }
    }
    if (t.p) {
        if (t.f) {
            func_02052d3c(t.p, t.q);
        }
        func_02052c04(t.p);
    }
    if (self->p && !self->f) {
        self->f = 1;
        func_02052c94(self->p, self->q);
    }
    func_02052d90(self->p, self->q);
    return self;
}
