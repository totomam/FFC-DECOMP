#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *s;
} G;

extern void *func_ov006_021b3e6c(uint32_t a, uint32_t b);
extern void func_ov006_021b3e20(uint32_t a, uint8_t b, void *c);
extern G data_ov006_021bc778;
extern uint8_t data_ov006_021b856c[];
extern uint8_t data_ov006_021b856f[];

void func_ov006_021a92f0(void)
{
    int n;
    int i;
    int j;
    int k;

    n = data_ov006_021bc778.s[0x51];
    if (n > 5) {
        n = 5;
    }
    for (i = 0; i < n; i++) {
        *(uint32_t *)(data_ov006_021bc778.s + 0x10 + i * 4) = (uint32_t)func_ov006_021b3e6c(0, 0x2e);
        *(uint32_t *)(data_ov006_021bc778.s + 0x24 + i * 4) = (uint32_t)func_ov006_021b3e6c(0, 0x18);
    }
    i = 0;
    j = i;
    for (; i < 3; i++) {
        func_ov006_021b3e20(j, data_ov006_021b856c[i], *(void **)(data_ov006_021bc778.s + 0x10));
        *(uint16_t *)(data_ov006_021bc778.s + 0x42 + i * 2) = (uint16_t)(((uint16_t *)*(void **)(data_ov006_021bc778.s + 0x10))[2] & 0x3ff);
    }
    i = 0;
    for (; j < 4; j++) {
        func_ov006_021b3e20(i, data_ov006_021b856f[j], *(void **)(data_ov006_021bc778.s + 0x24));
        *(uint16_t *)(data_ov006_021bc778.s + 0x48 + j * 2) = (uint16_t)(((uint16_t *)*(void **)(data_ov006_021bc778.s + 0x24))[2] & 0x3ff);
    }
    if (n > 0) {
        for (k = 0; k < n; k++) {
            uint16_t *h;
            h = (uint16_t *)*(void **)(data_ov006_021bc778.s + 0x10 + k * 4);
            h[2] = (uint16_t)((h[2] & 0xfffff3ff) | 0xc00);
            h = (uint16_t *)*(void **)(data_ov006_021bc778.s + 0x24 + k * 4);
            h[2] = (uint16_t)((h[2] & 0xfffff3ff) | 0xc00);
        }
    }
}
