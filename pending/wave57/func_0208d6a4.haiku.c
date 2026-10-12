#include "ffc/types.h"

typedef struct { uint32_t w[33]; } Buf;

void func_0208d6a4(void *dst, void *srcp) {
    Buf loc;
    uint8_t *src = (uint8_t *)srcp;
    uint8_t *data;
    uint32_t lim;
    uint32_t used;
    int i;

    if (*(uint16_t *)(src + 0x3c) != 0) {
        ((uint8_t *)&loc)[0] = 0;
        *(Buf *)dst = loc;
        return;
    }
    ((uint8_t *)&loc)[0] = (uint8_t)*(uint16_t *)(src + 0x3e);
    if (((uint8_t *)&loc)[0] == 0) {
        *(Buf *)dst = loc;
        return;
    }
    if (((uint8_t *)&loc)[0] > 0x10) {
        ((uint8_t *)&loc)[0] = 0x10;
    }
    lim = (uint16_t)(*(uint16_t *)src * 2 - 0x40);
    data = src + 0x40;
    used = 0;
    for (i = 0; i < (int)((uint8_t *)&loc)[0]; i++) {
        uint8_t *e = (uint8_t *)&loc + i * 8;
        e[4] = data[0];
        e[5] = data[1];
        *(uint8_t **)(e + 8) = data + 2;
        used = (uint16_t)(used + data[1] + 2);
        if (used > lim) {
            ((uint8_t *)&loc)[0] = 0;
            *(Buf *)dst = loc;
            return;
        }
        data += data[1] + 2;
    }
    *(Buf *)dst = loc;
}
