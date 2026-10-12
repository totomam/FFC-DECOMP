#include "ffc/types.h"

extern uint8_t data_0213e258[];
extern int16_t data_020a5d80[];
extern uint32_t func_0208a384(void);
extern void *func_02077b70(void *list, void *prev);
extern int func_0208a19c(void *p);
extern void func_02079f8c(void *o);
extern void func_0207c94c(void *p);
extern int32_t func_0207c92c(void *p);
extern void func_02089bc0(uint8_t idx, int32_t v);
extern int func_0207c95c(void *p);
extern void func_02079f0c(void *o);
extern void func_02089b84(uint8_t idx);

typedef struct Inner {
    uint8_t pad[0x20];
    uint8_t f20;
} Inner;

typedef struct Obj {
    uint32_t w0;
    Inner *p4;
    uint8_t pad08[0x1c - 0x08];
    uint8_t sub1c[0x2c - 0x1c];
    uint8_t f2c;
    uint8_t f2d;
    uint8_t pad2e;
    uint8_t f2f;
    void *p30;
    uint8_t pad34[0x3c - 0x34];
    uint8_t f3c;
    uint8_t pad3d;
    int16_t s3e;
    uint8_t f40;
    uint8_t f41;
} Obj;

void func_02079bf8(void)
{
    uint32_t mask = func_0208a384();
    Obj *o = (Obj *)func_02077b70(data_0213e258, 0);
    Obj *next;
    int32_t a, b, c, d, v;

    int16_t *tbl;

    if (o == 0) {
        return;
    }
    tbl = data_020a5d80;
    do {
        next = (Obj *)func_02077b70(data_0213e258, o);
        if (o->f2d == 0) {
            if (func_0208a19c(o->p30)) {
                o->f2d = 1;
            }
        }
        if (o->f2d != 0) {
            if (!(mask & (1u << o->f3c))) {
                func_02079f8c(o);
                o = next;
                continue;
            }
        }
        func_0207c94c(o->sub1c);
        a = tbl[o->f41];
        b = tbl[o->f40];
        c = tbl[o->p4->f20];
        d = tbl[func_0207c92c(o->sub1c) >> 8];
        v = d + (c + (b + a));
        if (v < -0x8000) {
            v = -0x8000;
        } else if (v > 0x7fff) {
            v = 0x7fff;
        }
        if (v != o->s3e) {
            func_02089bc0(o->f3c, v);
            o->s3e = (int16_t)v;
        }
        if (o->f2c == 2) {
            if (func_0207c95c(o->sub1c)) {
                func_02079f0c(o);
            }
        }
        if (o->f2f != 0) {
            func_02089b84(o->f3c);
            o->f2f = 0;
        }
        o = next;
    } while (o != 0);
}
