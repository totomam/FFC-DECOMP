#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern int32_t func_02081210(int32_t object, int32_t scale);
extern int32_t data_ov003_02179f24[];
extern int32_t data_ov003_02179f2c;
extern int32_t data_ov003_02179f28;

uint8_t func_ov003_02153ed4(void *p, volatile int32_t a1, volatile int32_t a2, int32_t a3)
{
    uint8_t *base = (uint8_t *)p;
    uint8_t *m = (uint8_t *)func_02052d90(*(void **)(base + 0xe4), *(uint32_t *)(base + 0xe8));
    int32_t t, h;
    int32_t pt[2];
    int32_t *qx, *qy;
    volatile int32_t pad[14];
    uint8_t *mar;
    uint8_t *buf;
    int32_t A, B;

    if (*(uint32_t *)(m + 0x58) <= 1) {
        return 0;
    }
    mar = (uint8_t *)func_02052d90(*(void **)(base + 0x104), *(uint32_t *)(base + 0x108));
    A = func_02081210(a2, 0x2000);
    B = func_02081210(a1, 0x2000);
    pt[0] = B >> 12;
    pt[1] = A >> 12;
    qx = (data_ov003_02179f24[2] < pt[0]) ? &pt[0] : &data_ov003_02179f2c;
    t = *(int32_t *)(mar + 4) - 1;
    if (*qx >= t) {
        qx = &t;
    }
    pt[0] = *qx;
    qy = (data_ov003_02179f24[1] < pt[1]) ? &pt[1] : &data_ov003_02179f28;
    h = *(int32_t *)(mar + 8) - 1;
    if (*qy >= h) {
        qy = &h;
    }
    pt[1] = *qy;
    pad[0] = 0;
    buf = mar + *(int32_t *)(mar + 0x10);
    return buf[pt[0] + pt[1] * *(int32_t *)(mar + 4)];
}
