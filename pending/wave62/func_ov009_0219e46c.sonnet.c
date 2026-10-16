#include "ffc/types.h"
extern void func_02056c9c(void *p);
extern uint32_t data_ov009_021b0394;
extern uint32_t data_020ae644;
extern uint32_t data_020ae654;
typedef struct { uint32_t w[8]; uint32_t a, b; uint32_t c; uint16_t h[17]; } X;
void *func_ov009_0219e46c(uint8_t *self, uint32_t u, uint32_t d, uint32_t *src, uint8_t e) {
    uint32_t *dst;
    uint16_t *sh, *dh;
    int n; uint32_t k;
    func_02056c9c(self);
    *(uint32_t *)self = (uint32_t)&data_ov009_021b0394;
    *(uint32_t *)(self + 0x80) = d;
    dst = (uint32_t *)(self + 0x84);
    dst[0] = src[0];
    k = (uint32_t)&data_020ae644;
    dst[2] = src[2];
    dst[4] = src[4];
    dst[6] = src[6];
    dst[8] = src[8];
    dst[1] = k;
    dst[3] = k;
    dst[5] = k;
    dst[7] = k;
    dst[10] = src[10];
    dst[9] = (uint32_t)&data_020ae654;
    dst[11] = src[11];
    sh = (uint16_t *)(src + 12);
    dh = (uint16_t *)(dst + 12);
    n = 17;
    do { *dh++ = *sh++; } while (--n != 0);
    dst[21] = src[21];
    dst[22] = src[22];
    dst[23] = src[23];
    self[0xe4] = e;
    return self;
}
