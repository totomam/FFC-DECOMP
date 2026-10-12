#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0, f4, f8, fc, f10, f14, f18, f1c, f20, f24, f28, f2c;
    uint16_t h[17];
    uint16_t pad;
    uint32_t f54, f58, f5c;
} Obj;

typedef struct Src {
    void *vt;
    uint16_t a[21];
    uint32_t w;
    uint8_t b[20];
    uint8_t c[16];
} Src;

typedef struct Big {
    uint32_t w[38];
} Big;

extern void func_02037598(void);
extern void func_02036750(Src *p);
extern void func_02035f58(void *p);
extern void *func_02035fd0(void *object);
extern void func_0201cf34(void *ctx, Big *b);
extern void func_0201f1f0(void *ctx, uint32_t v, Src *s);
extern int func_020367bc(Src *s, uint32_t i);
extern void func_0201f600(void *ctx, uint32_t i, Src *s, Obj *o);
extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218a2b4(void *a, uint32_t b, Big c, Src *d, Obj *e);
extern void func_020367a8(void *p);
extern void func_ov001_0218de64(void *self, uint32_t a, uint32_t b, uint32_t c);
extern void *data_020b93b8;
extern uint8_t data_020ae664[];
extern uint32_t data_ov001_02194610[];

void func_ov001_0218a104(uint8_t *self)
{
    Big big;
    Src src;
    Obj objs[5];
    Obj tmp;
    Src dst;
    uint32_t i, j;
    void *r7;
    int r6;

    func_02037598();
    func_02036750(&src);
    func_02035f58(&objs[0]);
    func_02035f58(&objs[1]);
    func_02035f58(&objs[2]);
    func_02035f58(&objs[3]);
    func_02035f58(&objs[4]);

    for (i = 0; i < 5; i++) {
        func_02035f58(&tmp);
        objs[i].f0 = tmp.f0;
        objs[i].f8 = tmp.f8;
        objs[i].f10 = tmp.f10;
        objs[i].f18 = tmp.f18;
        objs[i].f20 = tmp.f20;
        objs[i].f28 = tmp.f28;
        objs[i].f2c = tmp.f2c;
        for (j = 0; j < 17; j++) {
            objs[i].h[j] = tmp.h[j];
        }
        objs[i].f54 = tmp.f54;
        objs[i].f58 = tmp.f58;
        objs[i].f5c = tmp.f5c;
        func_02035fd0(&tmp);
    }

    func_0201cf34(data_020b93b8, &big);
    func_0201f1f0(data_020b93b8, *(uint32_t *)(self + 0x100), &src);

    for (i = 0; i < 5; i++) {
        if (func_020367bc(&src, i)) {
            func_0201f600(data_020b93b8, i, &src, &objs[i]);
        }
    }

    r6 = 0;
    r7 = func_0205681c(0x2e4);
    if (r7 != 0) {
        dst.vt = data_020ae664;
        for (j = 0; j < 21; j++) {
            dst.a[j] = src.a[j];
        }
        dst.w = src.w;
        for (j = 0; j < 20; j++) {
            dst.b[j] = src.b[j];
        }
        for (j = 0; j < 16; j++) {
            dst.c[j] = src.c[j];
        }
        r6 = 1;
        r7 = func_ov001_0218a2b4(r7, ((uint32_t (*)(void *))(*(void ***)self)[0x38 / 4])(self), big, &dst, objs);
    }
    ((void (*)(void *, void *))(*(void ***)self)[0x4c / 4])(self, r7);
    if (r6) {
        func_020367a8(&dst);
    }
    func_ov001_0218de64(self, 4, 1, 0);
    *(uint32_t *)(self + 0xf4) = data_ov001_02194610[0];
    *(uint32_t *)(self + 0xf8) = data_ov001_02194610[1];

    func_02035fd0(&objs[4]);
    func_02035fd0(&objs[3]);
    func_02035fd0(&objs[2]);
    func_02035fd0(&objs[1]);
    func_02035fd0(&objs[0]);
    func_020367a8(&src);
}
