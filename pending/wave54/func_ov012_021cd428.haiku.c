#include "ffc/types.h"

typedef struct { uint32_t w[4]; } Blk16;

extern void func_020628ac(void *o, Blk16 a);
extern void func_02056c4c(void *o);
extern void *func_ov005_02195e2c(void *o, Blk16 b, Blk16 c, int x, int y);
extern void func_02056bc0(void *object, void *node);
extern void func_ov012_021cd6fc(void *o);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(void *o, void *arg);
extern void *func_020059cc(void *object);
extern uint8_t data_ov012_021d3b9c[];

#define VCALL(o, idx) (((void **)(*(void **)(o)))[idx])
#define OBJ(p) (*(void **)((p) + 0xe4))

void func_ov012_021cd428(uint8_t *p, void *q)
{
    Blk16 ta, tb, tc;
    uint8_t i;
    uint8_t *pa;
    uint32_t buf[3];

    p[0x106] = 0;
    if (q == 0) {
        ((void (*)(void *))VCALL(OBJ(p), 11))(OBJ(p));
        return;
    }

    if (((int (*)(void *))VCALL(OBJ(p), 12))(OBJ(p))) {
        ((void (*)(void *))VCALL(OBJ(p), 10))(OBJ(p));
        ((void (*)(Blk16 *, void *))VCALL(q, 4))(&ta, q);
        func_020628ac(OBJ(p), ta);
    } else {
        func_02056c4c(*(void **)(p + 0xe0));
        ((void (*)(Blk16 *, void *))VCALL(OBJ(p), 7))(&tb, OBJ(p));
        ((void (*)(Blk16 *, void *))VCALL(q, 4))(&tc, q);
        func_02056bc0(*(void **)(p + 0xe0), func_ov005_02195e2c(OBJ(p), tb, tc, 10, -5));
    }

    pa = p + 0x107;
    for (i = 0; i < 8; i++) {
        if (q == ((void **)*(void **)(p + 0xc8))[i]) {
            p[0x107] = i;
            if ((uint8_t)(*pa + (p[0x104] << 3)) < *(uint32_t *)(p + 0xfc)) {
                func_ov012_021cd6fc(p);
                return;
            }
        }
        func_02005988(buf, data_ov012_021d3b9c);
        func_02068ddc(*(void **)(p + 0xe8), buf);
        func_020059cc(buf);
    }
}
