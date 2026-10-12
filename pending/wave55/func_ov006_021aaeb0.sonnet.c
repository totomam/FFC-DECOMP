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
#define A 0xffffb17d
    if (v >= (int)A) {
    } else if (v >= (int)A - 1) r5 = 2;
    else if (v >= (int)A - 2) r5 = 0x13;
    else if (v >= (int)A - 8) r5 = 2;
    else if (v >= (int)A - 9) r5 = 0x12;
    else if (v >= (int)A - 10) r5 = 2;
    else if (v >= (int)A - 11) r5 = 3;
    else if (v >= (int)0xffffadf9) r5 = 2;
    else if (v >= (int)0xffffa629) {
    } else if (v >= (int)0xffffa241) r5 = 0x13;
    else if (v >= (int)0xffff3cb1) {
    } else if (v >= (int)0xffff3cb1 - 3) r5 = 7;
    else if (v >= (int)0xffff3cb1 - 4) r5 = 5;
    else if (v >= (int)0xffff3cb1 - 0x63) {
    } else if (v >= (int)0xffff3cb1 - 0x64) { if (L.s == 2) r5 = 5; else r5 = 7; }
    else if (v >= (int)0xffff3866) {
    } else if (v >= (int)0xffff3866 - 1) { if (L.s == 2) r5 = 5; else r5 = 8; }
    else if (v >= (int)0xffff3866 - 4) r5 = 9;
    else if (v >= (int)0xffff3866 - 5) r5 = 5;
    else if (v >= (int)0xffff3866 - 0x65) {
    } else if (v >= (int)0xffff3866 - 0xc9) r5 = 0x14;
    else if (v >= (int)0xffff3866 - 0xcc) r5 = 0x15;
    else if (v >= (int)0xffff3866 - 0xcd) r5 = 4;
    else if (v >= (int)0xffff34e1) {
    } else if (v >= (int)0xffff34e1 - 3) r5 = 0xa;
    else if (v >= (int)0xffff34e1 - 4) r5 = 0x16;
    else if (v >= (int)0xffff34e1 - 0x64) {
    } else if (v >= (int)0xffff34e1 - 0x68) r5 = 0xb;
    else if (v >= (int)0xffff34e1 - 0xc8) {
    } else if (v >= (int)0xffff34e1 - 0xcc) r5 = 0xb;
    else if (v >= (int)0xffff33b5) {
    } else if (v >= (int)0xffff33b5 - 0x64) r5 = 2;
    else if (v >= (int)0xffff30f9) {
    } else if (v >= (int)0xffff2fcd) r5 = 2;
    idx = func_ov006_021a6524();
    h = func_ov006_021b42f8(0, data_ov006_021b8640[idx], idx);
    t6 = func_ov006_021a6614(data_ov006_021bc738, r5);
    func_02086b04((void *)&L.a0, 8, data_ov006_021b95e8, -data_ov006_021bc788);
    func_ov006_021b541c((void *)L.b, (void *)&L.a0, 8);
    idx = func_ov006_021a6524();
    w = *(uint16_t *)(data_ov006_021b8652 + idx * 4);
    {
    uint32_t u = *(uint16_t *)(data_ov006_021b8650 + func_ov006_021a6524() * 4);
    func_ov006_021b453c(h, u, w, 2, 10, (void *)L.b, 0);
    }
    func_ov006_021b45b0(h, 0xd, 0x3c, 0xe6, 0x5e, 2, func_ov006_021a3cc0(), t6);
    func_ov006_021b4690(h);
}
