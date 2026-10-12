#include "ffc/types.h"

typedef struct Sub {
    int f0;
} Sub;

typedef struct E {
    int a;
    int b;
    int c;
} E;

typedef struct P {
    int f0;
    Sub *f4;
    uint32_t f8;
    int pad0c;
    int pad10;
    int f14;
    E *f18;
    uint8_t f1c;
    uint8_t f1d;
    uint8_t f1e;
    uint8_t f1f;
    uint8_t pad20[0x3c];
    int *f5c;
} P;

typedef struct G {
    volatile int s0;
    volatile int s4;
    int s8;
    P *sc;
} G;

extern G data_ov000_0217004c;

extern int func_ov000_02159000(void);
extern int func_ov000_02159af8(void);
extern int func_ov000_0215a3d0(void);
extern int func_ov001_0217f388(void);
extern void func_ov001_0217f3a0(void);
extern void func_ov001_0217f344(void);
extern void func_ov000_02159b6c(void *p, int n);
extern int func_ov000_02154ed0(void *p);
extern void func_ov000_02159d14(void);
extern int *func_ov000_0215917c(int a, int b);
extern void func_ov000_0215988c(int a, int b);
extern int func_ov000_0215a638(void);
extern int func_ov000_021553c4(int a, void *p);
extern int func_ov001_02176168(Sub *a, int *b, int c, int d, void *e, int f);
extern int func_ov000_02159f34(void);
extern void func_ov000_0215a3f4(void);

void func_ov000_0215968c(void)
{
    G *g = &data_ov000_0217004c;
    int cnt;
        int i;
    int k;
    P *q;

    if (g->sc == 0) {
        goto end;
    }
    if (func_ov000_02159000() != 0) {
        goto end;
    }
    if (g->sc->f18 == 0) {
        if (g->sc->f4 == 0) {
            goto end;
        }
        if (g->sc->f4->f0 == 0) {
            goto end;
        }
        func_ov000_02159af8();
        return;
    }
    if (func_ov000_0215a3d0() != 0) {
        goto L40;
    }
    if (func_ov001_0217f388() == 0) {
        goto L5a;
    }
L40:
    g->s4 = 1;
    g->s0 = 0;
    func_ov001_0217f3a0();
    g->s4 = 0;
    if (g->s0 == 1) {
        g->s0 = 0;
        func_ov001_0217f344();
    }
L5a:
    if (g->sc->f4 == 0) {
        goto Lac;
    }
    if (g->sc->f4->f0 == 0) {
        goto Lac;
    }
    if (func_ov000_02159af8() != 0) {
        goto end;
    }
    if (g->sc->f0 == 0) {
        goto end;
    }
    if (g->sc->f18 == 0) {
        goto Lac;
    }
    if (g->sc->f1e == 3) {
        goto Lac;
    }
    if (g->sc->f8 <= 7) {
        goto Lac;
    }
    if (g->sc->f1e <= 1) {
        func_ov000_02159b6c(g->sc->f18, g->sc->f14);
    }
    if ((int)g->sc->f1c < g->sc->f14) {
        goto Lac;
    }
    g->sc->f1e = 3;
    g->sc->f1f++;
Lac:
    if (g->sc->f1f < 2) {
        goto end;
    }
    if (g->sc->f4 == 0) {
        goto L17a;
    }
    if (g->sc->f4->f0 == 0) {
        goto L17a;
    }
    cnt = 0;
    k = 0;
    for (i = 0; i < g->sc->f14; i++) {
        if (func_ov000_02154ed0(&g->sc->f18[i]) == 3) {
            (cnt)++;
        }
    }
    if (cnt == 0) {
        g->sc->f1f = 0;
        func_ov000_02159d14();
        return;
    }
    g->sc->f5c = func_ov000_0215917c(4, cnt << 2);
    q = g->sc;
    if (q->f5c == 0) {
        func_ov000_0215988c(9, (int)0xfffeee8f);
        return;
    }
    for (i = 0; i < g->sc->f14; i++) {
        if (func_ov000_02154ed0(&g->sc->f18[i]) == 3) {
            g->sc->f5c[k] = func_ov000_021553c4(func_ov000_0215a638(), &g->sc->f18[i]);
            k++;
        }
    }
    func_ov001_02176168(g->sc->f4, g->sc->f5c, cnt, 0, (void *)func_ov000_0215a3f4, 0);
    if (func_ov000_02159f34() != 0) {
        goto end;
    }
L17a:
    g->sc->f1f = 0;
end:
    return;
}
