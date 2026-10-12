#include "ffc/types.h"

struct Elem { uint32_t w; uint8_t pad[36]; };
struct E6 { uint8_t r0[0x10]; void *p10; };
struct Y { uint8_t r0[8]; void *p8; uint8_t r10[12]; void *p18; };
struct X { uint8_t r0[0x18]; struct Y *p18; };
struct Obj {
    void *vt;               /* 0x00 */
    uint8_t r04[0x10];
    struct X *p14;          /* 0x14 */
    uint8_t obj18[4];       /* 0x18 */
    void *p1c;              /* 0x1c */
    void *p20;              /* 0x20 */
    struct Elem *arr24;     /* 0x24 */
    uint32_t count;         /* 0x28 */
    uint8_t r2c[12];
    uint32_t flags;         /* 0x38 */
    uint8_t r3c[0x24];
    void *p60;              /* 0x60 */
    uint8_t r64[4];
    void *p68;              /* 0x68 */
    struct E6 **p6c;        /* 0x6c */
    void **p70;             /* 0x70 */
    void **p74;             /* 0x74 */
};

extern uint32_t data_020b16d8[];
extern void func_02063bcc(struct Obj *self);
extern void func_020642e8(struct Obj *self, int v);
extern void func_0205847c(void *p);
extern void func_02056858(void *p);
extern void func_02063ba4(void *a, void *b);
extern void func_0205fd04(void *p);
extern void func_02063bbc(void *a, void *b);
extern uint32_t func_02063558(const void *object);
extern void func_0205ffd0(void *p);
extern void func_0205f898(void *a, void *b);
extern void func_02063530(void *a);
extern void func_02062868(struct Obj *self);

struct Obj *func_02063f58(struct Obj *self)
{
    uint32_t i;
    void *e;

    self->vt = data_020b16d8;
    func_02063bcc(self);
    func_020642e8(self, 1);
    for (i = 0; i < self->count; i++) {
        self->arr24[i].w = (self->arr24[i].w & 0xfffffcff) | 0x200;
    }
    if (self->flags & 1) {
        for (i = 0; i < self->count; i++) {
            e = self->p6c[i];
            if (e != 0) {
                func_0205847c(((struct E6 *)e)->p10);
            }
        }
        func_02056858(self->p6c);
    } else {
        func_02063ba4(&self->obj18, self->p14);
    }
    if (self->flags & 2) {
        for (i = 0; i < self->count; i++) {
            e = self->p70[i];
            if (e != 0) {
                func_0205fd04(self->p14->p18->p8);
            }
        }
        func_02056858(self->p70);
    } else {
        func_02063bbc(&self->obj18, self->p14);
    }
    if (func_02063558(&self->obj18)) {
        for (i = 0; i < self->count; i++) {
            e = self->p74[i];
            if (e != 0) {
                func_0205ffd0(self->p14->p18->p18);
                self->p74[i] = 0;
            }
        }
        func_02056858(self->p74);
    }
    func_02056858(self->p68);
    func_02056858(self->p60);
    if (self->p1c != 0 && self->count != 0) {
        func_0205f898(self->p1c, self->p20);
    }
    func_02063530(&self->obj18);
    func_02062868(self);
    return self;
}
