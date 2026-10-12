/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    volatile uint16_t divcnt;
    uint16_t pad0;
    uint32_t pad1[3];
    volatile uint32_t numer_lo;
    volatile uint32_t numer_hi;
    volatile uint32_t denom_lo;
    volatile uint32_t denom_hi;
    uint32_t pad2[2];
    volatile uint32_t divres_lo;
    volatile uint32_t divres_hi;
    uint32_t pad3[2];
    volatile uint16_t sqrtcnt;
    uint16_t pad4;
    uint32_t pad5;
    volatile int32_t sqrt_res;
    volatile uint32_t sqrt_lo;
    volatile uint32_t sqrt_hi;
} HwMath;

void func_0208152c(int16_t *v, int16_t *out)
{
    HwMath *hw = (HwMath *)0x04000280;
    int64_t sum;
    int64_t t;
    int32_t sr;
    int32_t x = v[0];
    int32_t y = v[1];
    int32_t z = v[2];

    sum = (int64_t)(x * x) + (int64_t)(y * y);
    sum += (int64_t)(z * z);

    hw->divcnt = 2;
    hw->numer_lo = 0;
    hw->numer_hi = 0x1000000;
    hw->denom_lo = (uint32_t)sum;
    hw->denom_hi = (uint32_t)((uint64_t)sum >> 32);
    hw->sqrtcnt = 1;
    hw->sqrt_lo = (uint32_t)((uint64_t)sum << 2);
    hw->sqrt_hi = (uint32_t)(((uint64_t)sum << 2) >> 32);

    while (hw->sqrtcnt & 0x8000)
        ;
    while (hw->divcnt & 0x8000)
        ;

    sr = hw->sqrt_res;
    t = (int64_t)((((uint64_t)hw->divres_hi) << 32) | (uint64_t)hw->divres_lo) * sr;

    out[0] = (int16_t)((t * (int64_t)v[0] + ((int64_t)1 << 44)) >> 45);
    out[1] = (int16_t)((t * (int64_t)v[1] + ((int64_t)1 << 44)) >> 45);
    out[2] = (int16_t)((t * (int64_t)v[2] + ((int64_t)1 << 44)) >> 45);
}
