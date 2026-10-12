#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern int32_t func_02081210(int32_t object, int32_t scale);
extern int32_t data_ov003_02179f24[];
extern int32_t data_ov003_02179f2c;
extern int32_t data_ov003_02179f28;

typedef struct { int32_t a, b, c; } S;
uint8_t func_ov003_02153ed4(void *p, S s)
{
    uint8_t *base = (uint8_t *)p;
    uint8_t *m = (uint8_t *)func_02052d90(*(void **)(base + 0xe4), *(uint32_t *)(base + 0xe8));
    int32_t w[18];
    int32_t *qx, *qy;
    uint8_t *mar;
    int32_t A, B;

    if (*(uint32_t *)(m + 0x58) <= 1) {
        return 0;
    }
    mar = (uint8_t *)func_02052d90(*(void **)(base + 0x104), *(uint32_t *)(base + 0x108));
    B = func_02081210(s.b, 0x2000);
    A = func_02081210(s.a, 0x2000);
    w[14] = A; w[15] = B; w[2] = A; w[3] = B;
    w[16] = A >> 12;
    w[17] = B >> 12;
    qx = (data_ov003_02179f24[2] < w[16]) ? &w[16] : &data_ov003_02179f2c;
    w[12] = *(int32_t *)(mar + 4) - 1;
    if (*qx >= w[12]) {
        qx = &w[12];
    }
    w[16] = *qx;
    qy = (data_ov003_02179f24[1] < w[17]) ? &w[17] : &data_ov003_02179f28;
    w[11] = *(int32_t *)(mar + 8) - 1;
    if (*qy >= w[11]) {
        qy = &w[11];
    }
    w[17] = *qy;
    return (mar + *(int32_t *)(mar + 0x10))[w[16] + w[17] * *(int32_t *)(mar + 4)];
}
