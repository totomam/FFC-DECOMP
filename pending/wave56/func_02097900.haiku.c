#include "ffc/types.h"

typedef int (*VFn)(void *);

struct S {
    VFn *vt;        /* 0x00 */
    uint32_t f4;    /* 0x04 */
    uint32_t f8;    /* 0x08 */
    uint32_t fc;    /* 0x0c */
    uint32_t f10;   /* 0x10 */
    uint32_t f14;   /* 0x14 */
    uint32_t f18;   /* 0x18 */
    uint32_t f1c;   /* 0x1c */
    void *f20;      /* 0x20 */
    uint32_t f24;   /* 0x24 */
    uint32_t f28;   /* 0x28 */
    uint32_t f2c;   /* 0x2c */
    uint32_t f30;   /* 0x30 */
    uint8_t pad34[4];
    uint8_t b38;    /* 0x38 */
    uint8_t b39;    /* 0x39 */
};

extern void func_02056858(void *p);
extern void *func_02056830(uint32_t size);
extern void func_02097a18(void *p);
extern uint32_t data_020b31c8;

struct S *func_02097900(struct S *p, void *q, uint32_t n)
{
    int r7 = 1;
    uint8_t r1;
    if (p->f14 == 0) {
        r7 = 0;
    }
    if (p->vt[5](p) < 0) {
        return (struct S *)0;
    }
    p->f4 = 0;
    p->f8 = 0;
    p->fc = 0;
    p->f14 = 0;
    p->f10 = 0;
    p->f18 = 0;
    p->f2c = 0;
    p->f28 = 0;
    p->f24 = 0;
    if (q == 0) {
        uint32_t tmp[2];
        uint32_t *pp;
        uint32_t sz;
        if (p->b39) {
            func_02056858(p->f20);
        }
        p->f20 = 0;
        tmp[0] = n;
        sz = ((uint32_t)((int32_t)p->f30 << 1)) >> 1;
        tmp[1] = sz;
        pp = (sz < n) ? &tmp[0] : &tmp[1];
        pp = (*pp < data_020b31c8) ? &data_020b31c8 : pp;
        p->f1c = *pp;
        p->f20 = func_02056830(*pp << 1);
        p->b39 = 1;
        r1 = (n != 0);
    } else {
        int32_t s = ((int32_t)(p->f30 << 1)) / 2;
        if ((int32_t)n < s) {
            return (struct S *)0;
        }
        if (p->b39) {
            func_02056858(p->f20);
        }
        p->b39 = 0;
        p->f20 = q;
        p->f1c = n;
        r1 = 1;
    }
    p->b38 = r1;
    if (p->b38 && r7) {
        func_02097a18(p);
    }
    return p;
}
