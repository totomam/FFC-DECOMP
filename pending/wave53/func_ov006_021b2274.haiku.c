#include "ffc/types.h"

extern void func_ov006_021b2140(void);
extern void func_ov006_021b20f0(int);
extern int func_0208dc18(uint32_t, uint32_t);
extern int func_ov006_021b2354(void *);
extern char data_ov006_021b9e2c[];
extern char data_ov006_021b9e58[];
extern char data_ov006_021b9e84[];

typedef struct {
    uint8_t pad0[0x4c];
    int (*fn)(void *);
    uint8_t pad1[2];
    uint16_t h52;
} P4;

typedef struct {
    void (*f0)();
    P4 *p4;
} G;

typedef struct {
    uint8_t pad0[2];
    uint16_t f2;
    uint8_t pad1[4];
    uint16_t f8;
    uint8_t pad2[6];
    uint16_t f10;
} A;

extern G data_ov006_021bc800;

void func_ov006_021b2274(A *a)
{
    uint16_t bit = a->f10;
    uint16_t mask = (uint16_t)(1u << bit);
    G *g = &data_ov006_021bc800;
    void (*f)();
    P4 *p;
    int s;

    if (a->f2 != 0) {
        func_ov006_021b2140();
        func_ov006_021b20f0(9);
        return;
    }

    s = a->f8;
    if (s > 7) {
        if (s == 9) goto c9;
        goto def;
    }
    if (s == 7) goto c7;
    if (s > 2) goto def;
    if (s < 0) goto def;
    if (s == 0) goto c0;
    if (s == 2) return;
    goto def;

c7:
    f = g->f0;
    if (f) {
        f(0x8000000u, data_ov006_021b9e2c, bit);
    }
    p = g->p4;
    if (p->fn == 0 || p->fn(a) != 0) {
        p->h52 |= mask;
        return;
    }
    if (func_0208dc18(0, bit) == 2) return;
    func_ov006_021b2140();
    func_ov006_021b20f0(9);
    return;

c9:
    f = g->f0;
    if (f) {
        f(0x8000000u, data_ov006_021b9e58, bit);
    }
    p = g->p4;
    p->h52 &= (uint16_t)~mask;
    return;

c0:
    if (func_ov006_021b2354(a) != 0) return;
    func_ov006_021b20f0(9);
    return;

def:
    f = g->f0;
    if (f) {
        f(0x8000000u, data_ov006_021b9e84);
    }
}
