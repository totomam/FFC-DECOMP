#include "ffc/types.h"

extern int32_t func_ov001_02186c70(void *self, uint32_t a, uint16_t b);
extern void *func_ov001_02186d24(void *self);
extern int32_t func_ov001_02186e30(uint8_t *p, int32_t n);

typedef void (*cb_t)(void *, void *, uint32_t, int32_t, uint8_t **, void *);

int32_t func_ov001_02187e90(void *self, uint8_t *data, int32_t size) {
    uint8_t b4[4];
    uint8_t b2[2];
    uint8_t wb[4];
    uint8_t *arr[16];
    uint32_t w, sw;
    void *f2;
    int32_t f1, n, count, cnt;
    cb_t fp;

    if (size < 11) {
        return 4;
    }
    b4[0] = data[0];
    b4[1] = data[1];
    b4[2] = data[2];
    b4[3] = data[3];
    b2[0] = data[4];
    b2[1] = data[5];
    f1 = func_ov001_02186c70(self, *(uint32_t *)b4, *(uint16_t *)b2);
    if (f1 == -1) {
        return 0;
    }
    f2 = func_ov001_02186d24(self);
    wb[0] = data[6];
    wb[1] = data[7];
    wb[2] = data[8];
    wb[3] = data[9];
    cnt = data[10];
    data += 11;
    size -= 11;
    w = *(uint32_t *)wb;
    sw = (w << 24) | ((w << 8) & 0xff0000u) | ((w >> 8) & 0xff00u) | (w >> 24);

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
