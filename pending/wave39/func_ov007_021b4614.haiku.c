#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Arg3;

extern void func_ov005_02195db0(void *obj, int flag);
extern int func_020628ac(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056c4c(void *obj);
extern void *func_ov005_02195e2c(void *obj, Arg3 v);
extern void func_02056bc0(void *object, void *node);

typedef struct { uint32_t w[4]; } Blk;
typedef struct { uint32_t w[4]; int32_t p; int32_t q; } Blk2;

#define OBJ(s) (*(void **)((s) + 0xdc))
#define SLOT(o, off) (((void **)*(void **)(o))[(off) / 4])

void func_ov007_021b4614(uint8_t *self, void *node)
{
    Blk buf1;
    Blk buf2;
    volatile Blk2 tmp;
    Blk *p4;
    Blk *p6;
    Arg3 v;

    p4 = &buf1;
    if (node == 0) {
        ((void (*)(void *))SLOT(OBJ(self), 0x2c))(OBJ(self));
        return;
    }
    ((void (*)(void *, void *))SLOT(node, 0x10))(p4, node);
    func_ov005_02195db0(OBJ(self), 1);
    if (((int (*)(void *))SLOT(OBJ(self), 0x30))(OBJ(self)) != 0) {

        {
            Blk t = *p4;
            func_020628ac(OBJ(self), t.w[0], t.w[1], t.w[2]);
        }
    } else {
        p6 = &buf2;
        func_02056c4c(*(void **)(self + 0xd8));
        ((void (*)(void *, void *))SLOT(OBJ(self), 0x1c))(p6, OBJ(self));
        tmp.w[0] = p4->w[0]; tmp.w[1] = p4->w[1];
        tmp.w[2] = p4->w[2]; tmp.w[3] = p4->w[3];
        tmp.p = 10;
        tmp.q = -5;
        v = *(Arg3 *)p6;
        func_02056bc0(*(void **)(self + 0xd8),
                      func_ov005_02195e2c(OBJ(self), v));
    }
    ((void (*)(void *))SLOT(OBJ(self), 0x28))(OBJ(self));
}
