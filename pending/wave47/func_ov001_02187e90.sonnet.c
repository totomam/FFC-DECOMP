#include "ffc/types.h"

extern int32_t func_ov001_02186c70(void *self, uint32_t a, uint16_t b);
extern void *func_ov001_02186d24(void *self);
extern int32_t func_ov001_02186e30(uint8_t *p, int32_t n);

typedef void (*cb_t)(void *, void *, uint32_t, int32_t, uint8_t **, void *);

int32_t func_ov001_02187e90(void *self, uint8_t *data, int32_t size) {
    uint8_t *arr[16];
    uint8_t wb[4];
    uint32_t w;
    uint32_t w0;
    uint16_t h;
    uint32_t sw;
    void *f2;
    int32_t f1, n, count, cnt;
    cb_t fp;

    if (size < 11) {
        return 4;
    }
    {
    uint8_t *d = (uint8_t *)&w0;
    d[0] = data[0];
    d[1] = data[1];
    d[2] = data[2];
    d[3] = data[3];
    }
    {
    uint8_t *d = (uint8_t *)&h;
    d[0] = data[4];
    d[1] = data[5];
    }
    f1 = func_ov001_02186c70(self, w0, h);
    if (f1 == -1) {
        return 0;
    }
    f2 = func_ov001_02186d24(self);
    {
    uint8_t *d = (uint8_t *)&w;
    d[0] = data[6];
    d[1] = data[7];
    d[2] = data[8];
    d[3] = data[9];
    }
    cnt = data[10];
    data += 11;
    size -= 11;
    sw = (uint8_t)(w >> 24) | ((w >> 8) & 0xff00u) | ((w << 8) & 0xff0000u) | ((w << 24) & 0xff000000u);

    for (count = 0; count < cnt && count < 16; count++) {
        if (size < 1) {
            break;
        }
        n = func_ov001_02186e30(data, size);
        if (n == -1) {
            return 4;
        }
        arr[count] = data;
        data += n;
        size -= n;
    }

    fp = *(cb_t *)((uint8_t *)self + 0x48c);
    if (fp == 0) {
        return 0;
    }
    fp(self, f2, sw, count, arr, *(void **)((uint8_t *)self + 0x494));
    return 0;
}
