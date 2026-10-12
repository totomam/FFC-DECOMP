#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Blk;
typedef struct { uint32_t a, b, c; } Arg3;
typedef struct { Blk b; int32_t p, q; } Blk2;

extern void func_ov005_02195db0(void *obj, int flag);
extern int func_020628ac(void *obj, Blk v);
extern void func_02056c4c(void *obj);
extern void *func_ov005_02195e2c(void *obj, Blk v);
extern void func_02056bc0(void *object, void *node);

#define OBJ(s) (*(void **)((s) + 0xdc))
#define SLOT(o, off) (((void **)*(void **)(o))[(off) / 4])

void func_ov007_021b4614(uint8_t *self, void *node)
{
    Blk buf1;
    Blk buf2;
    volatile Blk2 tmp;
    Blk *p4;
    Blk *p6;

    if (node == 0) {
        ((void (*)(void *))SLOT(OBJ(self), 0x2c))(OBJ(self));
        return;
    }
    p4 = &buf1;
    buf1 = ((Blk (*)(void *))SLOT(node, 0x10))(node);
    func_ov005_02195db0(OBJ(self), 1);
    if (((int (*)(void *))SLOT(OBJ(self), 0x30))(OBJ(self)) != 0) {
        func_020628ac(OBJ(self), *p4);
    } else {
        p6 = &buf2;
        func_02056c4c(*(void **)(self + 0xd8));
        buf2 = ((Blk (*)(void *))SLOT(OBJ(self), 0x1c))(OBJ(self));
        tmp.b = *p4;
        tmp.p = 10;
        tmp.q = -5;
        func_02056bc0(*(void **)(self + 0xd8),
                      func_ov005_02195e2c(OBJ(self), *p6));
    }
    ((void (*)(void *))SLOT(OBJ(self), 0x28))(OBJ(self));
}
