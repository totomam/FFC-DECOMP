/* cflags: -nothumb */
#include "ffc/types.h"

#define R16(a) (*(volatile uint16_t *)(a))
#define R32(a) (*(volatile uint32_t *)(a))

void func_0208152c(int16_t *v, int16_t *out)
{
    int32_t x = v[0];
    int32_t y = v[1];
    int32_t z = v[2];
    int64_t sum = (int64_t)(x * x) + (int64_t)(y * y);
    int32_t sr;
    int64_t t;
    sum += (int64_t)(z * z);

    R16(0x4000280) = 2;
    R32(0x4000290) = 0;
    R32(0x4000294) = 0x1000000;
    R32(0x4000298) = (uint32_t)sum;
    R32(0x400029c) = (uint32_t)((uint64_t)sum >> 32);
    R16(0x40002b0) = 1;
    R32(0x40002b8) = (uint32_t)((uint64_t)sum << 2);
    R32(0x40002bc) = (uint32_t)(((uint64_t)sum << 2) >> 32);

    while (R16(0x40002b0) & 0x8000)
        ;
    sr = (int32_t)R32(0x40002b4);
    while (R16(0x4000280) & 0x8000)
        ;
    {
        int64_t d = *(volatile int64_t *)0x40002a0;
        int32_t a = v[0], b = v[1], c = v[2];
        t = d * sr;
        out[0] = (int16_t)((t * a + ((int64_t)1 << 44)) >> 45);
        out[1] = (int16_t)((t * b + ((int64_t)1 << 44)) >> 45);
        out[2] = (int16_t)((t * c + ((int64_t)1 << 44)) >> 45);
    }
}

