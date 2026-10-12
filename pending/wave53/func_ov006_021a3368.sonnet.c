#include "ffc/types.h"

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t p14[7];
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    uint32_t p3c[10];
    uint32_t f64;
    uint32_t p68[3];
    uint32_t f74;
    uint32_t f78;
    uint32_t f7c;
} G170;

typedef struct {
    uint32_t p0[2];
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
} GBC4;

extern G170 data_ov006_021bb170;
extern GBC4 data_ov006_021b8bc4;
extern uint32_t data_ov006_021bb21c[];
extern uint32_t data_ov006_021bb2dc[];

extern int func_ov006_021a04d4(uint32_t x);
extern int func_02086dc0(void);
extern void func_02086dcc(void *obj, void *fn, int zero, uint32_t sum, uint32_t v, uint32_t a);
extern uint32_t func_ov006_021a32b0(void);
extern void func_ov006_021a3530(void);
extern void func_020870a0(void *object);
extern int func_ov006_021a1914(void);

typedef int (*fn_blx_t)(uint32_t);

int func_ov006_021a3368(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t k;
    int r;
    GBC4 *g = &data_ov006_021b8bc4;

    if ((int32_t)data_ov006_021bb170.f38 >= 1 && (int32_t)data_ov006_021bb170.f38 <= 5) {
        return -10;
    }

    k = 7;
    g->f10 = b;
    data_ov006_021bb170.f38 = k;
    data_ov006_021bb170.f7c = c;
    data_ov006_021bb170.f04 = d;
    data_ov006_021bb170.f0c = e;
    g->f08 = f;

    r = func_ov006_021a04d4(b);
    data_ov006_021bb170.f74 = 1;
    if (r < 0) {
        data_ov006_021bb170.f78 = (uint32_t)r;
        return r;
    }

    r = ((fn_blx_t)data_ov006_021bb170.f04)(g->f08);
    data_ov006_021bb170.f30 = (uint32_t)r;
    if (r == 0) {
        data_ov006_021bb170.f78 = k - 8;
        return -1;
    }

    if (func_02086dc0() != 1) {
        data_ov006_021bb170.f78 = k - 16;
        return -9;
    }

    func_02086dcc(data_ov006_021bb21c, (void *)func_ov006_021a1914, 0,
                  data_ov006_021bb170.f30 + (g->f08 & ~7u),
                  g->f08, a);
    data_ov006_021bb170.f38 = 1;

    r = (int)func_ov006_021a32b0();
    g->f0c = (uint32_t)r + 0xea60;

    data_ov006_021bb170.f10 = 0;
    {
        uint32_t *q = data_ov006_021bb2dc;
        uint32_t n = k;
        do {
            q[0] = 0;
            q[1] = 0;
            q[2] = 0;
            q[3] = 0;
            q[4] = 0;
            q[5] = 0;
            q[6] = 0;
            q[7] = 0;
            q += 8;
        } while (--n != 0);
        q[0] = 0;
        q[1] = 0;
    }

    func_ov006_021a3530();
    func_020870a0(data_ov006_021bb21c);
    data_ov006_021bb170.f64 = 1;
    return 1;
}
