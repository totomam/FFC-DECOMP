#include "ffc/types.h"

typedef struct Obj {
    int32_t handle;
    uint32_t f04;
    uint16_t f08;
    uint8_t pad0a[2];
    void *f0c;
    void *f10;
    uint8_t pad14[0x10];
    void *f24;
    uint8_t pad28[0x10];
    uint32_t f38;
    uint32_t f3c;
    uint32_t f40;
    uint32_t f44;
} Obj;

typedef struct { uint8_t len; uint8_t fam; uint16_t port; uint32_t addr; } SA;
extern int func_ov000_02165914(void);
extern int func_ov001_02182214(void *p, uint32_t *a, uint16_t *b);
extern Obj *func_ov000_021653d4(uint32_t size);
extern void *func_020903cc(void *dst, int c, uint32_t n);
extern void *func_ov000_02168a10(uint32_t a, uint32_t b, uint32_t c, void *fn1, void *fn2, uint32_t d);
extern void func_ov000_021653f4(Obj *o);
extern void *func_ov000_021686f4(uint32_t a, uint32_t b, void *c);
extern void func_ov000_02168a5c(void *h);
extern int32_t func_ov000_02165418(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02168738(void *h);
extern int32_t func_ov000_02165484(int32_t h, uint32_t *buf, uint32_t n);
extern void func_ov000_02165428(int32_t h);
extern void func_ov000_0216556c(int32_t h, uint32_t *a, uint32_t *b);
extern void func_ov001_02181c00(void);
extern void func_ov001_02181c14(void);
extern void func_ov001_02181c30(void);

int func_ov001_02181c64(Obj **out, void *p, uint32_t x, uint32_t y, void *cb, uint32_t n)
{
    SA sa;
    uint32_t *kp;
    uint32_t a14;
    uint32_t cnt;
    uint16_t port;
    Obj *o;
    uint16_t v;
    int32_t r;

    func_ov000_02165914();
    if (y == 0) {
        y = 0x10000;
    }
    if (x == 0) {
        x = 0x10000;
    }
    if (func_ov001_02182214(p, &a14, &port) == 0) {
        return 4;
    }
    o = func_ov000_021653d4(0x4c);
    if (o == 0) {
        return 1;
    }
    func_020903cc(o, 0, 0x4c);
    o->handle = -1;
    o->f3c = y;
    o->f38 = x;
    o->f24 = cb;
    o->f0c = func_ov000_02168a10(4, 0x20, 2, func_ov001_02181c00, func_ov001_02181c14, 0);
    if (o->f0c == 0) {
        func_ov000_021653f4(o);
        return 1;
    }
    o->f10 = func_ov000_021686f4(4, 4, func_ov001_02181c30);
    if (o->f10 == 0) {
        func_ov000_02168a5c(o->f0c);
        func_ov000_021653f4(o);
        return 1;
    }
    o->handle = func_ov000_02165418(2, 2, 0);
    o->f40 = n;
    if (n == 3) {
        o->f44 = 0;
    } else {
        o->f44 = n;
    }
    if (o->handle == -1) {
        func_ov000_02168a5c(o->f0c);
        func_ov000_02168738(o->f10);
        func_ov000_021653f4(o);
        return 3;
    }
    kp = (uint32_t *)&sa;
    kp[0] = 0;
    kp[1] = 0;
    sa.fam = 2;
    sa.addr = a14;
    v = port;
    sa.port = (uint16_t)((uint8_t)(v >> 8) | ((v << 8) & 0xff00));
    if (n != 3) {
        r = func_ov000_02165484(o->handle, kp, 8);
        if (r == -1) {
            func_ov000_02165428(o->handle);
            func_ov000_02168a5c(o->f0c);
            func_ov000_02168738(o->f10);
            func_ov000_021653f4(o);
            return 3;
        }
    }
    cnt = 8;
    func_ov000_0216556c(o->handle, (uint32_t *)&sa, &cnt);
    o->f04 = sa.addr;
    v = sa.port;
    o->f08 = (uint16_t)((uint8_t)(v >> 8) | ((v << 8) & 0xff00));
    *out = o;
    return 0;
}
