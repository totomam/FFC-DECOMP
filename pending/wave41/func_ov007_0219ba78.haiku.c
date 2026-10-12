#include "ffc/types.h"

typedef struct {
    uint32_t w[11];
} Blob;

typedef struct {
    volatile uint32_t t[4];
    Blob s;
} Local;

extern void func_02069658(void *p);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_0201afbc(uint32_t h, Blob *b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219a2d4(void *a, uint32_t b, int c, Blob s);
extern void func_020695ec(void *p, void *q);
extern void func_020697ac(void *p, void *q);
extern void func_02069dcc(void *p, void *q);
extern uint32_t data_020b93b8;

void *func_ov007_0219ba78(uint8_t *p)
{
    Local l;
    void *r;
    func_02069658(p);
    func_02084b2c(&l.s, 0, 0x2c);
    func_0201afbc(data_020b93b8, &l.s);
    r = func_0205681c(0xb4);
    if (r != 0) {
        l.t[0] = 0x80;
        l.t[2] = 0x80;
        l.t[3] = 0x48;
        l.t[1] = 0x48;
        r = func_ov007_0219a2d4(r, *(uint32_t *)(p + 0xb8), 0, l.s);
    }
    func_020695ec(p, r);
    func_020697ac(p, r);
    func_02069dcc(p, r);
    return r;
}
