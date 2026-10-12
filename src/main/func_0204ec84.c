#include "ffc/types.h"

typedef struct Arr32 { uint32_t w[8]; } Arr32;
typedef struct Ent { uint32_t key; Arr32 rest; } Ent;
typedef struct Sub {
    uint8_t pad0[0x38];
    uint32_t f38;
    uint8_t pad1[4];
    uint32_t f40;
    uint8_t pad2[8];
    uint8_t *f4c;
    uint8_t *f50;
} Sub;
typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    Sub *f8;
    uint32_t fc;
    uint8_t pad10[4];
    uint32_t f14;
    uint8_t pad18[0x10];
    uint32_t f28;
    uint8_t pad2c[0x10];
    uint32_t f3c;
    uint32_t f40;
    uint8_t pad44[0x34];
    uint32_t f78;
    uint8_t pad7c[0x10];
    uint32_t f8c;
} Obj;
typedef struct Guard { void *p; volatile uint8_t f; } Guard;
typedef struct Glob { uint8_t pad[8]; uint8_t *p8; } Glob;
typedef struct G2 { uint8_t pad[0x1c]; uint32_t k; } G2;

extern Glob data_0213df10;
extern Ent data_0209ed3c[5];
extern Arr32 data_0209e678;
extern G2 data_0209e658;

extern void func_0208763c(void *p);
extern void func_0204f6b0(uint32_t a, uint8_t *e, void *out);
extern void *func_0205681c(uint32_t size);
extern void *func_0205908c(void *obj, Obj *o, uint32_t a, uint32_t b, uint32_t c, Ent loc, uint32_t d, uint32_t e);
extern void func_02087678(void *p);

void func_0204ec84(Obj *r4, uint32_t a, uint32_t r5)
{
    Guard g;
    Ent loc;
    int i;
    void *obj;

    g.p = (void *)(data_0213df10.p8 + 0x7c);
    g.f = 1;
    if (g.f) {
        func_0208763c(g.p);
    }
    func_0204f6b0(r4->f4, r4->f8->f4c + a * 0x1c, &r4->f28);
    func_0204f6b0(r4->f4, r4->f8->f50 + r5 * 0x1c, &r4->f3c);
    { uint32_t t = (r5 != 0); r4->fc = (r4->fc & 0xbfffffff) | ((t << 31) >> 1); }

    if (r5 != 0) {
        for (i = 0; i < 5; i++) {
            if (data_0209ed3c[i].key == r5 && r4->f40 == data_0209ed3c[i].rest.w[0]) {
                break;
            }
        }
        loc.key = data_0209ed3c[i].key;
        loc.rest = data_0209ed3c[i].rest;
    } else {
        loc.key = data_0209e658.k;
        loc.rest = data_0209e678;
    }

    if (a != 0) {
        obj = func_0205681c(0x58);
        if (obj != 0) {
            obj = func_0205908c(obj, r4, r4->f8->f40, r4->f28, r4->f8->f38, loc, r4->f78, r4->f8c);
        }
        r4->f14 = (uint32_t)obj;
    }

    if (g.f) {
        func_02087678(g.p);
    }
}
