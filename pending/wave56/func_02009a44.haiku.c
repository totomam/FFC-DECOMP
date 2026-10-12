#include "ffc/types.h"

extern volatile uint32_t data_020aada8[];
extern volatile uint32_t data_020aadb0[];
extern volatile uint32_t data_020aadac[];

typedef struct Obj {
    uint32_t pad[7];
    uint16_t *out0;
    uint16_t *out1;
} Obj;

void func_02009a44(Obj *p, uint32_t a, uint32_t b, uint32_t c,
                   uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t i, k;
    for (i = 0; i < 0xc0; i++) {
        uint32_t X, Y, Z, t0, t1, t2, t3;
        uint32_t *q0, *q1, *q3;
        k = 0xc0 - i;
        X = ((a * k + d * i) * 0x155) >> 16;
        Y = ((b * k + e * i) * 0x155) >> 16;
        Z = ((c * k + f * i) * 0x155) >> 16;
        p->out0[i] = (uint16_t)(((Z >> 3) << 10) | ((Y >> 3) << 5) | (X >> 3));

        t0 = Y + 4;
        q0 = &t0;
        if (data_020aada8[2] < t0) q0 = &data_020aadb0[0];
        t2 = Z + 4;
        q1 = &t2;
        if (data_020aada8[0] < t2) q1 = &data_020aada8[0];
        t3 = X + 4;
        q3 = &t3;
        if (data_020aada8[1] < t3) q3 = &data_020aadac[0];

        p->out1[i] = (uint16_t)(((*q1 >> 3) << 10) | ((*q0 >> 3) << 5) | (*q3 >> 3));
    }
}
