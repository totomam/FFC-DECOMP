#include "ffc/types.h"

typedef struct Hdr { int f0; void *f4; int f8; int fc; } Hdr;
typedef struct Obj { int f0; int f4; void *f8; } Obj;
typedef struct Big { uint8_t tmp[0x18]; void *a; uint16_t b; uint8_t pad[6]; } Big;

extern Hdr *func_ov000_02166414(void *a);
extern void func_ov000_021652a8(int a, int b, int c, const void *d, ...);
extern int func_ov000_0216888c(void *h, void *p, void *fn, int x, int y);
extern void func_ov001_021821ac(void *a, uint32_t b, void *c);
extern Obj *func_ov000_0216876c(void *h);
extern int func_ov001_02180828(void *h);
extern uint8_t *func_ov000_021653d4(int size);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern int func_ov001_02180728(void *h, void *buf, int size, int x);
extern void func_ov000_021653f4(void *buf);
extern int func_ov000_02166444(void);
extern const char data_ov000_0216b7fc[];
extern const char data_ov000_0216b894[];
extern const char data_ov000_0216b8c8[];

int func_ov000_02166d80(void *a, uint32_t b, int8_t *c, void *d, int e, int f)
{
    Hdr *h;
    Obj *o;
    Big big;
    int size;
    int r;
    uint8_t *buf;
    uint8_t *dst;
    int8_t *src;
    int n;

    h = func_ov000_02166414(a);
    if (h->fc == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 3;
    }
    if (c[0] != 0) {
        size = e + 0x10;
    } else {
        size = e;
    }
    big.a = a;
    big.b = (uint16_t)b;
    r = func_ov000_0216888c(h->f4, &big.a, (void *)func_ov000_02166444, 0, 0);
    if (r == -1) {
        func_ov001_021821ac(a, b, big.tmp);
        func_ov000_021652a8(12, 0, 2, data_ov000_0216b894, big.tmp);
        return 4;
    }
    o = func_ov000_0216876c(h->f4);
    if (size > func_ov001_02180828(o->f8) && f != 0) {
        func_ov000_021652a8(12, 0, 2, data_ov000_0216b8c8);
        return 12;
    }
    buf = func_ov000_021653d4(size);
    dst = buf;
    src = c;
    n = 16;
    do {
        *dst++ = *src++;
    } while (--n);
    func_02090380(buf + 0x10, d, e);
    r = func_ov001_02180728(o->f8, buf, size, f);
    func_ov000_021653f4(buf);
    return r ? 8 : 0;
}
