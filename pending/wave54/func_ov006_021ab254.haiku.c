#include "ffc/types.h"

typedef struct {
    uint8_t pad0;
    uint8_t b1;
    uint8_t pad[2];
    uint16_t h4;
    void *p8;
} G;

extern G data_ov006_021bc78c;
extern int8_t data_ov006_021b866f[];

extern void *func_ov006_021afd28(void);
extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_ov006_021ab4b8(void);
extern void func_ov006_021ab378(void);
extern uint32_t func_ov006_021a6524(void);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a3bb0(int a);
extern void func_ov006_021a3ecc(void);
extern void *func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov006_021af5ac(int a, int b, int c, int d, void *e);
extern void *func_ov006_021b42f8(int a, int b);
extern void *func_ov006_021b3e6c(int a, int b);
extern void *func_ov006_021b570c(int a, void (*f)(void), int c, int d);
extern void func_ov006_021abc4c(void);
extern void func_ov006_021ac4e4(void);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021ac490(void);
extern void func_ov006_021ac7a4(void);
extern void func_ov006_021ab4e0(void);

void func_ov006_021ab254(void)
{
    uint8_t *p = (uint8_t *)func_ov006_021afd28();
    G *g;
    int a0, a1, a2;
    int i;
    uint8_t *q;
    uint16_t *h;

    {
        void *o = func_ov006_021b49e4(0x48, 4);
        g = &data_ov006_021bc78c;
        g->p8 = o;
    }
    ((uint8_t *)g->p8)[0x43] = p[0xf6];
    ((uint8_t *)g->p8)[0x42] = 0xc;
    func_ov006_021ab4b8();
    func_ov006_021ab378();
    if (g->b1 == 0) {
        a2 = (int)func_ov006_021a6524();
        a1 = data_ov006_021b866f[a2];
        a2 = p[0xf4] + 1;
        a0 = 0x30;
    } else {
        a0 = 0x45;
        a1 = -1;
        a2 = 0;
    }
    func_ov006_021a3aa0(a0, a1, a2);
    func_ov006_021a3bb0(1);
    func_ov006_021a3ecc();
    {
        void *m = func_0209a76c(0x37 * g->h4, 0x91);
        func_ov006_021af5ac(2, 0x55, 0xf1, 0x41, m);
    }
    *(void **)((uint8_t *)g->p8 + 0x14) = func_ov006_021b42f8(0, 1);
    for (i = 0; i < 7; i++) {
        *(void **)((uint8_t *)g->p8 + 0x18 + i * 4) = func_ov006_021b3e6c(0, 0x29);
    }
    p = p + 0xe7;
    q = p;
    if (*q == 1 || *q == 2) {
        *(void **)((uint8_t *)g->p8 + 0x34) = func_ov006_021b3e6c(0, (*q == 1) ? 0x50 : 0x51);
        h = *(uint16_t **)((uint8_t *)g->p8 + 0x34);
        h[2] = (uint16_t)((h[2] & 0xfffff3ff) | (3u << 10));
    }
    *(void **)((uint8_t *)g->p8 + 0x3c) = func_ov006_021b570c(1, func_ov006_021ac490, 0, 0x6e);
    ((void **)g->p8)[0] = func_ov006_021b570c(0, func_ov006_021ac7a4, 0, 0x78);
    func_ov006_021abc4c();
    func_ov006_021ac4e4();
    func_ov006_021a64c8(func_ov006_021ab4e0);
}
