#include "ffc/types.h"

extern void func_0203c2e4(void);
extern uint32_t *func_02059aec(void);
extern void func_02059bf8(void *p);
extern void func_02022f48(void *a, int b, uint32_t c, int d, int e, int f);
extern void func_02022fbc(void *a, int b, int c);
extern void func_02022f5c(void *a, int b, int c, int d, int e);
extern void func_02022bec(void *a, int b);
extern void func_02081c40(void *p);
extern void func_02084b00(void *p, void *q);
extern void func_0202304c(void *a, int b, int c);
extern void func_02022ff8(void *a, int b);
extern void func_02023038(void *a, int b, uint16_t c);
extern uint16_t data_02139400[];
extern const uint16_t data_0209e220[];

void func_02022a60(void *a0, uint32_t p)
{
    uint8_t *a = (uint8_t *)a0;
    int i;
    uint32_t v;
    uint32_t w;
    uint16_t *d;
    uint16_t *h;

    v = 0xfffff6c3;
    w = v >> 17;
    for (i = 0; i < 4; i++) {
        uint8_t *e = a + i * 10;
        uint8_t flag = 1;
        *(uint16_t *)(e + 0x22) = 0x93d;
        *(uint16_t *)(e + 0x24) = v;
        *(uint16_t *)(e + 0x26) = v;
        *(uint16_t *)(e + 0x28) = w;
        if (i != 0) {
            flag = 0;
        }
        e[0x2a] = flag;
    }

    *(uint32_t *)(a + 0x78) = 0x1000;
    *(uint32_t *)(a + 0x64) = 0x1000;
    a[0x80] = 0;
    *(uint32_t *)(a + 0x70) = 0;
    *(uint32_t *)(a + 0x6c) = 0;
    *(uint32_t *)(a + 0x68) = 0;
    *(uint32_t *)(a + 0x7c) = 0;
    *(uint32_t *)(a + 0x74) = 0;
    *(uint32_t *)(a + 0x60) = 0;
    *(uint32_t *)(a + 0x5c) = 0;
    a[0x164] = 1;
    *(uint32_t *)(a + 0x218) = 0;
    *(uint32_t *)(a + 0x214) = 0;
    *(uint32_t *)(a + 0x238) = 0;
    *(uint32_t *)(a + 0x23c) = 0;
    *(uint16_t *)(a + 0x244) = 0;
    *(uint16_t *)(a + 0x242) = *(uint16_t *)(a + 0x244);
    *(uint16_t *)(a + 0x240) = *(uint16_t *)(a + 0x242);

    func_0203c2e4();
    {
        uint32_t *r = func_02059aec();
        *(uint32_t **)(a + 0x8c) = r;
        r[4] = (r[4] & ~3u) | 3u;
    }
    func_02059bf8(*(void **)(a + 0x8c));

    func_02022f48(a, 0, p, 0x7fff, 0x1e, 0);
    func_02022fbc(a, 0, 0);
    func_02022f5c(a, 0, 0, 0, 0);

    h = (uint16_t *)0x4000060;
    *h = *h & 0xcffb;
    v = 0xfffff000;
    d = data_02139400;
    d[0] = v;
    d[1] = v << 1;
    d[2] = v;
    d[3] = (uint32_t)h >> 13;
    d[4] = (uint32_t)h >> 12;
    d[5] = (uint32_t)h >> 13;

    func_02022bec(a, 0x1555);
    *(uint32_t *)0x4000440 = 0;
    func_02081c40(a + 0xc0);
    func_02084b00(a + 0xc0, a + (0x4000440u >> 18));
    func_0202304c(a, 0, 0);
    for (i = 0; i < 8; i++) {
        *(uint16_t *)(a + 0x17c + 2 * i) = 0;
    }
    func_02022ff8(a, 0);
    for (i = 0; i < 0x20; i++) {
        func_02023038(a, i, data_0209e220[i]);
    }
    *(uint32_t *)0x40004c0 = 0x7fff;
    *(uint32_t *)0x40004c4 = 0x7fff0000;
}
