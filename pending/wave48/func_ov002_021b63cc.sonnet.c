#include "ffc/types.h"

#define AT(T, base, off) (*(T *)((uint8_t *)(base) + (off)))

typedef struct {
    uint32_t x0;
    void *p;
    uint32_t idx;
    uint8_t flag;
} Loc;

extern uint32_t data_020b8e44;
extern char data_ov002_021d5f38[];
extern char data_020ae644[];
extern char data_020ae654[];
extern void *data_0209dfc8;

extern void func_02015e8c(void *loc, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02069434(void *obj, uint32_t v);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void func_02053290(void *obj);
extern uint32_t func_ov002_02198dec(uint32_t v);
extern uint32_t func_ov002_0219f4c8(uint32_t v);
extern void func_ov002_021bc3b8(uint32_t v, uint32_t n);
extern void func_020695e4(void *obj, uint32_t v);
extern void *func_0203b708(void *v);
extern void func_02056bc0(void *obj, void *node);

void *func_ov002_021b63cc(void *a, uint32_t b, uint32_t c, uint32_t d,
                          uint32_t e, uint32_t f, uint32_t *g, uint8_t h,
                          uint32_t i, uint32_t j, uint32_t k)
{
    Loc L;
    void *o;
    uint32_t n;
    uint16_t *src;
    uint32_t *q;
    uint32_t *p9;
    uint16_t *s;
    uint32_t dp;
    uint32_t x;
    void *r;

    func_02015e8c(&L, data_020b8e44);
    o = func_02052d90(L.p, L.idx);
    func_02069434(a, ((uint8_t *)o)[0xd] != 0 ? 2 : 0);
    {
        uint8_t *lp = (uint8_t *)&L;
        if (L.p != 0) {
            if (lp[0xc] != 0) {
                func_02052d3c(*(void **)(lp + 4), *(uint32_t *)(lp + 8));
            }
            func_02052c04(*(void **)(lp + 4));
        }
    }
    func_02053290(&L);

    *(void **)a = data_ov002_021d5f38;
    AT(uint32_t, a, 0xbc) = b;
    AT(uint32_t, a, 0xc0) = j;
    AT(uint32_t, a, 0xc4) = c;
    AT(uint32_t, a, 0xc8) = d;
    AT(uint32_t, a, 0xcc) = e;
    q = (uint32_t *)((uint8_t *)a + 0xe4);
    AT(uint32_t, a, 0xd0) = f;
    AT(uint32_t, a, 0xd4) = 0;
    AT(uint8_t, a, 0xdc) = h;
    src = (uint16_t *)((uint8_t *)g + 0x30);
    s = (uint16_t *)((uint8_t *)q + 0x30);
    AT(uint32_t, a, 0xe0) = i;

    AT(uint32_t, a, 0xe4) = g[0];
    dp = (uint32_t)data_020ae644;
    q[1] = dp;
    q[2] = g[2];
    q[3] = dp;
    q[4] = g[4];
    q[5] = dp;
    q[6] = g[6];
    q[7] = dp;
    q[8] = g[8];
    q[9] = dp;
    p9 = q + 9;
    p9[1] = g[10];
    dp = (uint32_t)data_020ae654;
    q[9] = dp;
    p9[2] = g[11];

    n = 0x11;
    do {
        *s = *src;
        s++;
        src++;
        n--;
    } while (n != 0);

    q[0x15] = g[0x15];
    q[0x16] = g[0x16];
    q[0x17] = g[0x17];

    AT(uint32_t, a, 0x154) = k;
    AT(uint32_t, a, 0x16c) = 0;
    x = func_ov002_02198dec(k);
    x = func_ov002_0219f4c8(x);
    func_ov002_021bc3b8(x, 0);
    x = func_ov002_02198dec(k);
    x = func_ov002_0219f4c8(x);
    func_ov002_021bc3b8(x, 1);
    func_020695e4(a, 1);
    r = func_0203b708(data_0209dfc8);
    func_02056bc0((uint8_t *)a + 0x14, r);
    return a;
}
