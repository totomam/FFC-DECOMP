#include "ffc/types.h"

typedef struct { uint32_t w[4]; } Blk;
typedef struct { Blk x; int32_t a; int32_t b; } Big;

extern void func_ov005_02195db0(void *obj, int v);
extern int func_020628ac(void *obj, Blk a);
extern void func_02056c4c(void *obj);
extern void *func_ov005_02195e2c(void *obj, Blk a);
extern void func_02056bc0(void *obj, void *node);

#define OBJ(s) (*(void **)((uint8_t *)(s) + 0x144))
#define FN(t, p, i) (((t)(*(void ***)(p))[i]))

void func_ov007_021bb638(uint8_t *self, void *node) {
    Blk x, y;
    volatile Big z;
    if (node == 0) {
        ((void (*)(void *))FN(void *, OBJ(self), 11))(OBJ(self));
        return;
    }
    ((void (*)(Blk *, void *))FN(void *, node, 4))(&x, node);
    func_ov005_02195db0(OBJ(self), 1);
    if (((int (*)(void *))FN(void *, OBJ(self), 12))(OBJ(self))) {
        func_020628ac(OBJ(self), x);
    } else {
        func_02056c4c(*(void **)(self + 0x140));
        ((void (*)(Blk *, void *))FN(void *, OBJ(self), 7))(&y, OBJ(self));
        z.x = x;
        z.a = 10;
        z.b = -5;
        node = func_ov005_02195e2c(OBJ(self), y);
        func_02056bc0(*(void **)(self + 0x140), node);
    }
    ((void (*)(void *))FN(void *, OBJ(self), 10))(OBJ(self));
}
