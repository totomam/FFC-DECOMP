#include "ffc/types.h"

typedef struct { uint32_t w[4]; } V4;

extern void func_020628ac(void *obj, V4 a);
extern void func_02056c4c(void *p);
extern uint32_t func_ov005_02195e2c(void *obj, V4 a, V4 b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void func_ov012_021d2200(void *self, uint8_t idx);

#define VSLOT(o, off) (((void **)(*(void **)(o)))[(off) / 4])

#define OBJ(s) (*(void **)((char *)(s) + (1 << 8)))

void func_ov012_021d2024(void *self, void *node)
{
    V4 t1, t2, t3;
    uint8_t i;
    uint32_t r;
    void *obj;
    void (*fa)(void *, void *);
    void (*fb)(void *, void *);

    if (node == 0) {
        obj = OBJ(self);
        ((void (*)(void *))VSLOT(obj, 0x2c))(obj);
        return;
    }
    obj = OBJ(self);
    if (((int (*)(void *))VSLOT(obj, 0x30))(obj) != 0) {
        obj = OBJ(self);
        ((void (*)(void *))VSLOT(obj, 0x28))(obj);
        fa = (void (*)(void *, void *))(*(void ***)node)[4];
        fa(&t1, node);
        obj = OBJ(self);
        func_020628ac(obj, t1);
    } else {
        func_02056c4c(*(void **)((char *)self + 0xfc));
        fb = (void (*)(void *, void *))VSLOT(OBJ(self), 0x1c);
        fb(&t2, OBJ(self));
        fa = (void (*)(void *, void *))(*(void ***)node)[4];
        fa(&t3, node);
        obj = OBJ(self);
        r = func_ov005_02195e2c(obj, t2, t3, 10, -5);
        func_02056bc0(*(void **)((char *)self + 0xfc), (void *)r);
    }
    for (i = 0; i < 3; i++) {
        if (node == *(void **)((char *)self + 0xcc + i * 4)) {
            func_ov012_021d2200(self, (uint8_t)(i + 1));
            return;
        }
    }
}
