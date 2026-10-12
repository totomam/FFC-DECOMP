#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t obj[3]; } Obj;
typedef struct { uint32_t key; uint32_t obj[3]; } VItem;
typedef struct { Obj *items; uint32_t count; uint32_t pad; } Arr;
typedef struct { VItem *data; uint32_t count; uint32_t cap; } Vec;
typedef struct {
    uint32_t flag;
    Pair pr;
    uint32_t pad[2];
    Obj l28;
    VItem item;
    Obj tmp44;
    Obj l50;
    Arr arr;
    Vec vec;
} Frame;

extern void func_0203919c(void *obj, uint32_t v);
extern void func_02050ea4(void *dst, void *src, uint32_t n);
extern void *func_020059cc(void *object);
extern void func_020095b8(void *dst, void *src);
extern void func_0200b34c(void *out, uint32_t idx, void *src);
extern void func_0200b618(void *vec, void *item, uint32_t flag);
extern uint32_t func_0203bda0(Pair p, void *q, uint32_t r3, uint32_t s0, uint32_t s1);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02031624(void *obj, void *dst, Pair p, void *vec, uint32_t s0, uint32_t s1);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *owner);
extern void *func_02056b10(void *owner);
extern uint32_t func_0203b75c(uint32_t x);
extern void func_0200958c(void *arr);
extern void func_0200b630(void *vec);

void func_ov003_02174f44(uint8_t *a, uint32_t *b, uint32_t c)
{
    Frame f;
    uint32_t i, next, r4, r5, r6;

    f.vec.data = 0;
    f.vec.count = 0;
    f.vec.cap = 0;
    func_0203919c(&f.l50, c);
    func_02050ea4(&f.arr, &f.l50, 10);
    func_020059cc(&f.l50);

    for (i = 0; i < f.arr.count; i++) {
        next = (i + 1 == f.arr.count) ? (uint32_t)-2 : i + 1;
        func_020095b8(&f.tmp44, &f.arr.items[i]);
        func_0200b34c(&f.item, next, &f.tmp44);
        if (f.vec.count < f.vec.cap) {
            VItem *e = &f.vec.data[f.vec.count];
            if (e != 0) {
                e->key = f.item.key;
                func_020095b8(e->obj, f.item.obj);
            }
            f.vec.count++;
        } else {
            f.flag = 0;
            func_0200b618(&f.vec, &f.item, f.flag);
        }
        func_020059cc(f.item.obj);
        func_020059cc(&f.tmp44);
    }

    r4 = 0x60 - ((f.arr.count << 4) >> 1);
    f.pr.a = 0x80;
    f.pr.b = r4;
    func_0203919c(&f.l28, (uint32_t)b);
    if (((uint32_t *)&f.l28)[0] & 1) {
        r5 = func_0203bda0(f.pr, 0, 6, 0, 0);
    } else {
        r5 = func_0203bda0(f.pr, (uint8_t *)&f.l28 + 1, 6, 0, 0);
    }
    func_020059cc(&f.l28);
    r6 = (uint32_t)func_0205681c(0x118);
    if (r6 != 0) {
        r6 = func_02031624((void *)r6, a + 0x88, f.pr, &f.vec, 5, 0);
    }
    func_02056bc0(a + 0x48, (void *)r5);
    r4 = (uint32_t)func_02056aec((void *)r5);
    r5 = (uint32_t)func_02056b10((void *)(r5 + 0x14));
    func_02056bc0(a + 0x14, (void *)func_0203b75c(1));
    func_02056bc0(a + 0x14, (void *)r5);
    func_02056bc0(a + 0x14, (void *)r6);
    func_02056bc0(a + 0x14, (void *)r4);
    func_0200958c(&f.arr);
    func_0200b630(&f.vec);
}
