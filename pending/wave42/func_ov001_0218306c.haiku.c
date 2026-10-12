#include "ffc/types.h"

typedef struct { uint32_t w[54]; } Blob;

extern uint32_t func_ov000_0216591c(void);
extern uint32_t func_ov001_02182744(int a, void *b);
extern uint32_t func_ov001_0218274c(void *p);
extern void func_ov000_02165428(uint32_t x);
extern uint32_t data_ov001_021952f0[];
extern Blob data_ov001_02195320;
extern Blob data_ov001_021953a0;
extern uint32_t data_ov001_02191b4c[];

uint32_t func_ov001_0218306c(int a)
{
    uint32_t r5 = 1;
    if (a == -1) {
        return r5;
    }
    {
        uint32_t t = func_ov000_0216591c();
        if (t - data_ov001_021952f0[4] < 10000) {
            r5 = func_ov001_02182744(a, &data_ov001_02195320);
        } else {
            r5 = 0;
        }
    }
    if (r5 == 0) {
        Blob tmp;
        uint32_t r7 = func_ov001_0218274c(&data_ov001_02195320);
        tmp = data_ov001_02195320;
        ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t))data_ov001_021952f0[3])(r7, tmp.w[0], tmp.w[1], tmp.w[2]);
        data_ov001_02191b4c[0] = data_ov001_021953a0.w[3];
        data_ov001_021952f0[2] = data_ov001_021953a0.w[4];
        if (data_ov001_02191b4c[2] != (uint32_t)-1) {
            func_ov000_02165428(data_ov001_02191b4c[2]);
            data_ov001_02191b4c[2] = (uint32_t)-1;
        }
        if (data_ov001_02191b4c[1] != (uint32_t)-1) {
            func_ov000_02165428(data_ov001_02191b4c[1]);
            data_ov001_02191b4c[1] = (uint32_t)-1;
        }
    }
    return r5;
}
