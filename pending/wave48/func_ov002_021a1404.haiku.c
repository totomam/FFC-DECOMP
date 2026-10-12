#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Elem;

typedef struct {
    uint32_t a;
    uint32_t count;
    uint32_t c;
} Local;

typedef struct {
    void *vtbl;
    uint32_t pad4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    Elem arr[12];
} Obj;

extern void *func_ov002_021aac10(void *object);
extern void func_ov002_021aa09c(void *a, void *b);
extern void func_0209cf5c(void *arr, uint32_t size, uint32_t n, void *ctor, void *dtor);
extern void func_ov002_021c8e10(void *out, uint32_t a, uint32_t b, uint32_t c);
extern Elem *func_ov002_021a50a4(void *local, uint32_t idx);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021aa778(const void *object);
extern uint32_t func_ov002_021c85f8(void *p);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_02055914(void *a, void *b);
extern void func_0209d02c(void *arr, uint32_t size, uint32_t n, void *dtor);
extern void func_ov002_021a50c8(void *local);
extern void func_0200ee84(void);
extern void func_0200ee74(void);
extern uint8_t data_020abb58[];

void func_ov002_021a1404(uint8_t *self, void *p1, uint32_t p2)
{
    Local local;
    Elem arr[12];
    Elem tmp;
    Obj *o;
    uint32_t i;
    uint32_t j;
    uint32_t count;
    uint32_t r5v;
    uint32_t r6v;

    local.a = 0;
    local.count = 0;
    local.c = 0;
    func_ov002_021aa09c(func_ov002_021aac10(p1), &local);
    count = local.count;

    func_0209cf5c(arr, 12, 12, (void *)func_0200ee74, (void *)func_0200ee84);
    for (i = 0; i < 12; i++) {
        func_ov002_021c8e10(&tmp, 0, 0, 1);
        arr[i].a = tmp.a;
        arr[i].b = tmp.b;
        arr[i].c = tmp.c;
    }

    for (j = 0; j < local.count; j++) {
        Elem *s = func_ov002_021a50a4(&local, j);
        arr[j].a = s->a;
        arr[j].b = s->b;
        arr[j].c = s->c;
    }

    o = func_0205681c(0xb0);
    if (o != 0) {
        if (p1 != 0) {
            r5v = func_ov002_021aa778(p1);
        } else {
            r5v = 0;
        }
        r6v = func_ov002_021c85f8(self + 0x144);
        o->f8 = 0;
        o->fc = 0x100ed;
        o->vtbl = data_020abb58;
        func_0209cf5c(o->arr, 12, 12, (void *)func_0200ee74, (void *)func_0200ee84);
        o->f10 = p2;
        o->f14 = r6v;
        o->f18 = r5v;
        o->f1c = count;
        func_02084ca4(arr, o->arr, 0x90);
    }

    func_02055914(*(void **)(self + 0xf0), o);
    func_0209d02c(arr, 12, 12, (void *)func_0200ee84);
    func_ov002_021a50c8(&local);
}
