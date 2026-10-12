/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
int32_t func_0209a76c(int32_t a, int32_t b);
void *func_02052d90(void *mar, uint32_t index);
void func_020849f4(void *dst, uint32_t src, uint32_t n);
void func_0206ad9c(void *p);
uint64_t func_0209a978(int32_t a, int32_t b);
void func_ov004_021495b8(uint8_t *p);
}

struct Obj;
typedef void (Obj::*PMF)();
struct Obj {
    uint8_t pad[0x80];
    PMF cb;
};

extern "C" void func_ov004_021495b8(uint8_t *p)
{
    Obj *o = (Obj *)p;
    int32_t r7;
    uint32_t r6;
    int32_t idx;
    uint32_t v38;
    uint8_t *r4, *base;
    void **vt;
    int32_t d;

    (o->*(o->cb))();

    r6 = *(uint32_t *)(p + 0x90);
    r7 = func_0209a76c((int32_t)r6 - (int32_t)*(uint32_t *)(p + 0x8c), 0x3c);

    v38 = *(uint32_t *)(*(uint8_t **)(p + 0x94) + 0x38);
    r4 = (uint8_t *)func_02052d90(*(void **)(p + 0x9c), *(uint32_t *)(p + 0xa0));

    int32_t m = func_0209a76c((int32_t)r6, 0x3c); idx = r7 + (0x5a - m);
    uint32_t *tbl = (uint32_t *)(r4 + *(uint32_t *)(r4 + 8));
    base = r4 + tbl[idx];
    func_020849f4(base + *(uint32_t *)(base + 4), v38, 0x300);

    func_0206ad9c(*(void **)(p + 0x94));

    d = (int32_t)*(uint32_t *)(p + 0x90);
    d = func_0209a76c(d, 0x3c) - r7;

    uint32_t q;
    void *o8;
    q = (uint32_t)(func_0209a978(d, 10) >> 32) + 1;
    o8 = *(void **)(p + 0xa8);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)o8)[14])(o8, q, 0);

    q = (uint32_t)func_0209a978(d, 10) + 1;
    o8 = *(void **)(p + 0xac);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)o8)[14])(o8, q, 0);
}
