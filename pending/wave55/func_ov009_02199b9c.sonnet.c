#include "ffc/types.h"

typedef void (*VFn)(void *, uint32_t);
typedef void (*VF1)(void *);

typedef struct {
    void **data;
    uint32_t size;
    uint32_t cap;
} Vec;

typedef struct {
    void *vt;
    uint8_t b04[0x44];
    uint8_t sub48[0x38];
    uint32_t w80;
    uint32_t w84;
    uint32_t w88;
    uint32_t w8c;
    uint32_t w90;
    Vec vec94;
    uint8_t ba0;
    uint8_t ba1;
    uint8_t ba2;
    uint8_t pad3;
    uint32_t wa4;
    uint32_t wa8;
} Obj;



typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;
extern void *data_ov009_021af844;
extern uint32_t data_ov009_021af7c0[];
extern void *data_020b8e44;

extern void func_02056c9c(void *obj, uint32_t v);
extern void *func_0203b81c(uint32_t n);
extern void func_02005988(void *dst, uint32_t src);
extern void func_020634e0(void *dst, void *src, uint32_t n);
extern void func_02063520(void *dst, void *src);
typedef struct { uint8_t b; } B1;
extern void func_ov009_0219a46c(void *vec, void *val, B1 z);
extern void func_02063530(void *p);
extern void func_020059cc(void *p);
extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *obj, uint32_t node);
extern uint32_t func_02015a38(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uintptr_t func_020159f8(void *obj);
extern void *func_0203b9cc(Pair p, uintptr_t c, uint32_t d);
extern uint32_t func_02066878(const void *object);
extern void func_0205fdc8(void *object, uint32_t value);
extern void *func_0203b878(void *a, uint32_t b);
extern void func_02068d58(void *a, uint32_t b, uint32_t c);

Obj *func_ov009_02199b9c(Obj *self)
{
    Vec *v;
    uint32_t u;
    void *o;
    void *q;
    void **slot;

    uint32_t zero = 0;
    func_02056c9c(self, zero);
    self->vt = &data_ov009_021af844;
    self->w80 = zero;
    self->w84 = zero;
    self->w88 = zero;
    self->w8c = zero;
    self->w90 = zero;
    v = &self->vec94;
    v->data = (void**)zero;
    v->size = zero;
    v->cap = zero;
    self->ba0 = zero;
    self->ba1 = zero;
    self->ba2 = zero;
    self->wa4 = zero;
    self->wa8 = zero;
    self->w84 = (uint32_t)func_0203b81c(0x10);

    {
        B1 z;
        uint8_t tmp1[12];
        uint32_t tmp2;
        func_02005988(tmp1, data_ov009_021af7c0[3]);
        func_020634e0(&tmp2, tmp1, 7);
        if (self->vec94.size < self->vec94.cap) {
            slot = self->vec94.data + self->vec94.size;
            if (slot != 0) {
                func_02063520(slot, &tmp2);
            }
            self->vec94.size = self->vec94.size + 1;
        } else {
            z.b = 0;
            func_ov009_0219a46c(&self->vec94, &tmp2, z);
        }
        func_02063530(&tmp2);
        func_020059cc(tmp1);
    }

    {
        B1 z2;
        uint8_t tmp3[12];
        uint32_t tmp4;
        func_02005988(tmp3, data_ov009_021af7c0[8]);
        func_020634e0(&tmp4, tmp3, 7);
        u = 0;
        u = 0;
        if (self->vec94.size < self->vec94.cap) {
            slot = self->vec94.data + self->vec94.size;
            if (slot != 0) {
                func_02063520(slot, &tmp4);
            }
            self->vec94.size = self->vec94.size + 1;
        } else {
            z2.b = u;
            func_ov009_0219a46c(&self->vec94, &tmp4, z2);
        }
        func_02063530(&tmp4);
        func_020059cc(tmp3);
    }

    self->w8c = func_0203b6f0();
    func_02056bc0(self->sub48, self->w8c);

    {
    Pair pr;
    pr.a = 0xa0;
    pr.b = 0x10;
    self->w80 = func_02015a38(data_020b8e44, 0, 1, 0);
    q = func_0203b9cc(pr, func_020159f8(data_020b8e44), 1);
    }
    func_02066878(q);
    func_0205fdc8(q, 1);
    self->w88 = (uint32_t)func_0203b878(q, self->w80);
    func_02056bc0(self->sub48, self->w88);
    o = (void *)self->w88;
    func_02068d58(o, 0, 0);
    o = (void *)self->w88;
    {
        void **vt = *(void ***)o;
        ((VFn)vt[8])(o, 1);
    }
    o = (void *)self->w88;
    {
        void **vt = *(void ***)o;
        ((VF1)vt[11])(o);
    }
    func_02056bc0(self->sub48, self->w84);
    return self;
}
