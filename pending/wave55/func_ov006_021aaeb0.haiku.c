#include "ffc/types.h"

extern void func_ov006_021a6508(int a, void *b);
extern int func_ov006_021a6524(void);
extern uint32_t func_ov006_021b42f8(int a, int b, int c);
extern uint32_t func_ov006_021a6614(uint32_t a, int b);
extern void func_02086b04(void *dst, int n, const void *src, int v);
extern void func_ov006_021b541c(void *dst, void *src, int n);
extern uint32_t func_ov006_021b453c(uint32_t h, int a, int b, int c, int d, void *e, int f);
extern int func_ov006_021a3cc0(void);
extern void func_ov006_021b45b0(uint32_t h, int a, int b, int c, int d, int e, int f, int g);
extern void func_ov006_021b4690(uint32_t h);

extern int32_t data_ov006_021bc788;
extern uint8_t data_ov006_021b8640[];
extern uint32_t data_ov006_021bc738;
extern uint8_t data_ov006_021b95e8[];
extern uint8_t data_ov006_021b8652[];
extern uint8_t data_ov006_021b8650[];

void func_ov006_021aaeb0(void)
{
    struct { uint32_t a0, a1; uint32_t s; uint32_t b[4]; } L;
    int r5 = 0;
    int v;
    uint32_t h;
    uint32_t t6;
    int idx;
    uint16_t w;

    func_ov006_021a6508(0, &L.s);
    v = data_ov006_021bc788;

    if (v < (int)0xffffb17d) goto L001a;
    goto L014c;
L001a:
    if (v < (int)0xffffb17d - 1) goto L0022;
    { r5 = 2; goto L014c; }
L0022:
    if (v < (int)0xffffb17d - 2) goto L002c;
    r5 = 0x13;
    goto L014c;
L002c:
    if (v < (int)0xffffb17d - 8) goto L0036;
    { r5 = 2; goto L014c; }
L0036:
    if (v < (int)0xffffb17d - 9) goto L0042;
    r5 = 0x12;
    goto L014c;
L0042:
    if (v < (int)0xffffb17d - 10) goto L004c;
    { r5 = 2; goto L014c; }
L004c:
    if (v < (int)0xffffb17d - 11) goto L0056;
    r5 = 3;
    goto L014c;
L0056:
    if (v < (int)0xffffadf9) goto L005e;
    { r5 = 2; goto L014c; }
L005e:
    if (v >= (int)0xffffa629) goto L014c;
    if (v < (int)0xffffa241) goto L006c;
    r5 = 0x13;
    goto L014c;
L006c:
    if (v >= (int)0xffff3cb1) goto L014c;
    if (v < (int)0xffff3cb1 - 3) goto L007c;
    r5 = 7;
    goto L014c;
L007c:
    if (v < (int)0xffff3cb1 - 4) goto L0086;
    r5 = 5;
    goto L014c;
L0086:
    if (v >= (int)0xffff3cb1 - 0x63) goto L014c;
    if (v < (int)0xffff3cb1 - 0x64) goto L009e;
    if (L.s != 2) goto L0078;
    goto L0082;
L009e:
    if (v >= (int)0xffff3866) goto L014c;
    if (v < (int)0xffff3866 - 1) goto L00b6;
    if (L.s == 2) goto L0082;
    r5 = 8;
    goto L014c;
L00b6:
    if (v < (int)0xffff3866 - 4) goto L00c0;
    r5 = 9;
    goto L014c;
L00c0:
    if (v < (int)0xffff3866 - 5) goto L00c8;
    goto L0082;
L00c8:
    if (v >= (int)0xffff3866 - 0x65) goto L014c;
    if (v < (int)0xffff3866 - 0xc9) goto L00dc;
    r5 = 0x14;
    goto L014c;
L00dc:
    if (v < (int)0xffff3866 - 0xcc) goto L00e8;
    r5 = 0x15;
    goto L014c;
L00e8:
    if (v < (int)0xffff3866 - 0xcd) goto L00f2;
    r5 = 4;
    goto L014c;
L00f2:
    if (v >= (int)0xffff34e1) goto L014c;
    if (v < (int)0xffff34e1 - 3) goto L0102;
    r5 = 0xa;
    goto L014c;
L0102:
    if (v < (int)0xffff34e1 - 4) goto L010c;
    r5 = 0x16;
    goto L014c;
L010c:
    if (v >= (int)0xffff34e1 - 0x64) goto L014c;
    if (v < (int)0xffff34e1 - 0x68) goto L0120;
    r5 = 0xb;
    goto L014c;
L0120:
    if (v >= (int)0xffff34e1 - 0xc8) goto L014c;
    if (v < (int)0xffff34e1 - 0xcc) goto L0130;
    r5 = 0xb;
    goto L014c;
L0130:
    if (v >= (int)0xffff33b5) goto L014c;
    if (v < (int)0xffff33b5 - 0x64) goto L013e;
    { r5 = 2; goto L014c; }
L013e:
    if (v >= (int)0xffff30f9) goto L014c;
    if (v < (int)0xffff2fcd) goto L014c;
L0082:
    r5 = 5;
    goto L014c;
L0078:
    r5 = 7;
    goto L014c;

L014c:
    idx = func_ov006_021a6524();
    h = func_ov006_021b42f8(0, data_ov006_021b8640[idx], idx);
    t6 = func_ov006_021a6614(data_ov006_021bc738, r5);
    func_02086b04((void *)&L.a0, 8, data_ov006_021b95e8, -data_ov006_021bc788);
    func_ov006_021b541c((void *)L.b, (void *)&L.a0, 8);
    idx = func_ov006_021a6524();
    w = *(uint16_t *)(data_ov006_021b8652 + idx * 4);
    idx = func_ov006_021a6524();
    func_ov006_021b453c(h, *(uint16_t *)(data_ov006_021b8650 + idx * 4), w, 2, 10, (void *)L.b, 0);
    func_ov006_021b45b0(h, 0xd, 0x3c, 0xe6, 0x5e, 2, func_ov006_021a3cc0(), t6);
    func_ov006_021b4690(h);
}
