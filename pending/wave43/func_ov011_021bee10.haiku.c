#include "ffc/types.h"

typedef struct {
    uint32_t hdr;
    uint16_t h[21];
    uint32_t w;
    uint8_t bb[20];
    uint32_t d[4];
} Buf;

typedef struct {
    uint32_t v[4];
} Quad;

typedef struct {
    uint8_t pad0[0x10c];
    uint32_t f10c;
    uint8_t pad1[0x10];
    int16_t f120;
} Obj;

extern void *data_020b93b8;
extern void func_02036750(void *p);
extern void func_020367a8(void *p);
extern void func_0201f1f0(void *d, int16_t s, void *p);
extern void func_0201f1a8(void *d, int16_t s, void *p);
extern void func_ov012_021d2e44(uint32_t a, int16_t s);
extern void func_ov011_021be7b4(Obj *a);

void func_ov011_021bee10(Obj *a)
{
    Buf c;
    Buf t;
    uint16_t *s;
    uint16_t *d;
    uint8_t *sb;
    uint8_t *db;
    uint32_t n;

    func_02036750(&c);
    func_0201f1f0(data_020b93b8, a->f120, &c);
    func_02036750(&t);
    s = t.h;
    d = c.h;
    n = 21;
    do {
        *d++ = *s++;
    } while (--n);
    c.w = t.w;
    sb = t.bb;
    db = c.bb;
    n = 20;
    do {
        *db++ = *sb++;
    } while (--n);
    *(Quad *)c.d = *(Quad *)t.d;
    func_020367a8(&t);
    func_0201f1a8(data_020b93b8, a->f120, &c);
    func_ov012_021d2e44(a->f10c, a->f120);
    func_ov011_021be7b4(a);
    func_020367a8(&c);
}
