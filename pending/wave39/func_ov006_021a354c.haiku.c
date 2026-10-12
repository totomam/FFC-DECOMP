#include "ffc/types.h"

struct Sub {
    uint32_t w0;
    uint16_t h4;
    uint16_t h6;
};

struct Obj {
    uint32_t f0;
    struct Sub *f4;
    uint8_t f8;
};

extern struct Obj *data_ov006_021bc6a4;
extern uint8_t data_ov006_021b8048[];
extern void *func_ov006_021b49e4(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b3e6c(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b570c(uint32_t a, void *f, uint32_t b);
extern void func_ov006_021a3600(void);

void func_ov006_021a354c(uint8_t a)
{
    uint32_t k;

    k = 4;
    data_ov006_021bc6a4 = func_ov006_021b49e4(12, k);
    data_ov006_021bc6a4->f8 = a;
    data_ov006_021bc6a4->f4 = (struct Sub *)func_ov006_021b3e6c(0, 0x47);
    data_ov006_021bc6a4->f4->h4 = (data_ov006_021bc6a4->f4->h4 & 0xf3ff) | (k << 8);
    data_ov006_021bc6a4->f4->w0 &= 0xfffff3ff;
    data_ov006_021bc6a4->f4->h4 = (data_ov006_021bc6a4->f4->h4 & 0x0fff) | (data_ov006_021b8048[a] << 12);
    data_ov006_021bc6a4->f4->w0 = (data_ov006_021bc6a4->f4->w0 & 0xfe00ff00) | 0x00e6008b;
    data_ov006_021bc6a4->f0 = func_ov006_021b570c(1, (void *)func_ov006_021a3600, 0);
}
