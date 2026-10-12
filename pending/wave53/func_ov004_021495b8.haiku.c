#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void *func_02052d90(void *mar, uint32_t index, uint32_t a, void *b, uint32_t c);
extern void func_020849f4(void *dst, uint32_t src, uint32_t n, void *m);
extern void func_0206ad9c(void *p);
extern int32_t func_0209a978(int32_t a, int32_t b);

typedef void (*MemFn)(void *self);

void func_ov004_021495b8(uint8_t *p)
{
    uint32_t *s = (uint32_t *)(p + 0x80);
    uint32_t adj = s[1];
    uint32_t off = adj >> 1;
    MemFn f;
    uint8_t *r4;
    int32_t r7;
    uint32_t r6;
    uint32_t val;
    int32_t idx;
    uint32_t v38;
    uint8_t *base;
    void **vt;
    int32_t d;

    if (adj & 1) {
        uint8_t *obj = *(uint8_t **)(p + off);
        f = *(MemFn *)(obj + s[0]);
    } else {
        f = (MemFn)s[0];
    }
    f(p + off);

    r6 = *(uint32_t *)(p + 0x90);
    r7 = func_0209a76c((int32_t)r6 - (int32_t)*(uint32_t *)(p + 0x8c), 0x3c);

    v38 = *(uint32_t *)(*(uint8_t **)(p + 0x94) + 0x38);
    r4 = (uint8_t *)func_02052d90(*(void **)(p + 0x9c), *(uint32_t *)(p + 0xa0), off, s, v38);

    idx = 0x5a - func_0209a76c((int32_t)r6, 0x3c) + r7;
    val = *(uint32_t *)(r4 + *(uint32_t *)(r4 + 8) + idx * 4);
    base = r4 + val;
    func_020849f4(base + *(uint32_t *)(base + 4), v38, 0x300, s);

    func_0206ad9c(*(void **)(p + 0x94));

    d = (int32_t)*(uint32_t *)(p + 0x90);
    d = func_0209a76c(d, 0x3c) - r7;

    vt = *(void ***)(*(uint8_t **)(p + 0xa8));
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(*(void **)(p + 0xa8), (uint32_t)(func_0209a978(d, 10) + 1), 0);

    vt = *(void ***)(*(uint8_t **)(p + 0xac));
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(*(void **)(p + 0xac), (uint32_t)(func_0209a978(d, 10) + 1), 0);
}
