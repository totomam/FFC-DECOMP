#include "ffc/types.h"

extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a1830(void);
extern uint32_t func_ov002_021994c0(uint32_t handle, uint32_t bit);
extern uint32_t func_ov002_021a8a2c(uint32_t object, uint8_t value);
extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021a1acc(uint32_t handle);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void func_ov002_021aa2c4(int32_t *out, void *object);
extern uint32_t func_ov002_021a16d4(const void *object);
extern void func_ov002_02195fa4(void);
extern void func_ov002_02198758(void);
extern uint32_t func_ov002_021c6274(void);
extern void func_02015e8c(void *out, uint32_t value);
extern void func_ov002_021a13ec(int32_t *out, uint32_t value);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

struct Loc {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint8_t b12;
    };

int func_ov002_021ac650(void *a, uint32_t flag, uint8_t *s, void *c, int32_t lim5, int32_t lim6)
{
    uint32_t h;
    struct { int32_t spare[3]; int32_t t[2]; int32_t cur; struct Loc loc; } L;
    uint32_t ok;
    uint8_t *q;
    int32_t cc;
    uint32_t r5;

    func_ov002_021aa850(a);
    h = func_ov002_021a1830();
    ok = 0;
    if (func_ov002_021994c0(h, 0x40)) {
        ok = 1;
    }
    if (func_ov002_021994c0(h, 1)) {
        return 1;
    }
    if (ok) {
        return 0;
    }

    {
        int32_t off = *(int32_t *)(s + 0x14);
        if (off == 0) {
            q = 0;
        } else {
            q = s + off;
        }
    }
    if (func_ov002_021a8a2c(func_ov002_021aa850(a), *q)) {
        return 1;
    }
    if (func_ov002_021aa11c(func_ov002_021aac10(c), 0xb)) {
        uint8_t *p4 = (uint8_t *)func_ov002_021aac10(c);
        cc = (int32_t)func_0206c184(func_ov002_021a1acc(*(uint32_t *)((uint8_t *)a + 0xbc)), 100);
        if (*(int32_t *)(p4 + 0xa4) > cc) {
            return 0;
        }
    }

    func_ov002_021aa2c4(&L.cur, a);
    if (!(L.cur > lim5)) {
        if (flag != 0) {
            cc = (int32_t)func_0206c184(func_ov002_021a1acc(*(uint32_t *)((uint8_t *)a + 0xbc)), 100);
            if (lim6 > cc) {
                func_ov002_021a16d4(func_ov002_021aa850(a));
                func_ov002_02195fa4();
                func_ov002_02198758();
                if (func_ov002_021c6274()) {
                    return 1;
                }
                return 2;
            }
        }
        return 1;
    }

    func_02015e8c(&L.loc, data_020b8e44);
    func_ov002_021a13ec(L.t, func_ov002_021aa850(a));
    {
        uint32_t w4 = L.loc.w4;
        uint32_t w8 = L.loc.w8;
        int32_t lim;
        void *p;
        int32_t tv = L.t[0];
        p = func_02052d90((const void *)w4, w8);
        lim = *(int32_t *)((uint8_t *)p + 0x80);
        r5 = 1;
        if (lim < tv) {
            r5 = 0;
        }
    }
    {struct Loc *lp = &L.loc;
    if (lp->w4 != 0) {
        if (lp->b12 != 0) {
            func_02052d3c(lp->w4, lp->w8);
        }
        func_02052c04(lp->w4);
    }
    func_02053290(lp);}
    if (r5 != 0) {
        return 0;
    }
    return 1;
}
