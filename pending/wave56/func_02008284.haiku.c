#include "ffc/types.h"

extern uint32_t *func_02008358(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern void func_020069f4(int32_t x);
extern void func_02006a14(int32_t x);
extern void func_02006a04(int32_t x);
extern void func_020069b0(int32_t a, int32_t b, int32_t c);
extern void func_020081d0(void);
extern void func_02007ebc(int32_t a, int32_t b, int32_t c);
extern void func_020080d0(int32_t a, int32_t b);
extern int32_t data_020b7dd4[];
extern int32_t data_020a7ea4[];

void func_02008284(uint32_t a, int32_t b, int32_t c, int32_t d)
{
    int32_t *q;
    int16_t s = (int16_t)b;
    uint32_t *p = func_02008358(s, b, c, d, d);

    q = data_020b7dd4;
    if (p == 0) {
        return;
    }
    switch (a) {
    case 0:
        func_020069f4(d);
        func_02007ebc(b, c, 0);
        break;
    case 1:
        func_020080d0(b, c);
        break;
    case 2:
        q[0] = b;
        q[1] = c;
        q[2] = d;
        break;
    case 3:
        func_020069f4(q[0]);
        func_02006a14(q[1]);
        func_02006a04(q[2]);
        func_020069b0((int32_t)(p[0] << 23) >> 23, (int32_t)(p[0] << 12) >> 21, c);
        q[0] = data_020a7ea4[2];
        q[1] = data_020a7ea4[3];
        q[2] = data_020a7ea4[4];
        func_020081d0();
        break;
    }
}
