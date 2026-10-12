#include "ffc/types.h"

extern int32_t func_0208f68c(int32_t x);

#define FLD(T, p, off) (*(T *)((uint8_t *)(p) + (off)))
#define DIFF(p) ((int32_t)FLD(uint16_t, p, 0xc0) - (int32_t)FLD(uint16_t, p, 0xb0))

int32_t func_ov001_0218274c(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint32_t s;
    int32_t r;
    int32_t r4, r6;

    FLD(int32_t, p, 0x8c) = 6;
    FLD(int32_t, p, 0x88) = 4;
    FLD(int32_t, p, 0xd4) = 1;

    s = FLD(uint32_t, p, 0x9c);
    if (s == 0 || FLD(uint32_t, p, 0xac) == 0 || FLD(uint32_t, p, 0xbc) == 0) {
        return 0;
    }

    r4 = FLD(int32_t, p, 0x84);
    if (r4 == 0 && FLD(int32_t, p, 0x80) == 0 && s == FLD(uint32_t, p, 0x94)) {
        FLD(int32_t, p, 0x8c) = 0;
    } else if (s == FLD(uint32_t, p, 0x94)) {
        FLD(int32_t, p, 0x8c) = 1;
    } else {
        r6 = FLD(int32_t, p, 0x80);
        if (r6 == 0 && r4 == 0 && func_0208f68c(DIFF(p)) >= 1) {
            FLD(int32_t, p, 0x8c) = 5;
            FLD(int32_t, p, 0x88) = 0;
        } else if (r6 != 0 && r4 == 0 && func_0208f68c(DIFF(p)) >= 1) {
            FLD(int32_t, p, 0x8c) = 5;
            FLD(int32_t, p, 0x88) = 2;
        } else if (r6 == 0 && r4 != 0 && func_0208f68c(DIFF(p)) >= 1) {
            FLD(int32_t, p, 0x8c) = 5;
            FLD(int32_t, p, 0x88) = 3;
        } else if (r6 != 0 && r4 != 0 && func_0208f68c(DIFF(p)) >= 1) {
            FLD(int32_t, p, 0x8c) = 5;
            FLD(int32_t, p, 0x88) = 1;
        } else if (r4 != 0) {
            FLD(int32_t, p, 0x8c) = 4;
        } else if (r6 != 0 && r4 == 0) {
            FLD(int32_t, p, 0x8c) = 3;
        } else if (r6 == 0 && r4 == 0) {
            FLD(int32_t, p, 0x8c) = 2;
        } else {
            FLD(int32_t, p, 0x8c) = 6;
        }
    }

check:
    if (FLD(uint16_t, p, 0xa0) == FLD(uint16_t, p, 0x98) &&
        FLD(uint16_t, p, 0xb0) == FLD(uint16_t, p, 0xa8) &&
        FLD(uint16_t, p, 0xc0) == FLD(uint16_t, p, 0xb8)) {
        FLD(int32_t, p, 0x90) = 1;
    } else if (FLD(uint16_t, p, 0xa0) == FLD(uint16_t, p, 0xb0) &&
               FLD(uint16_t, p, 0xb0) == FLD(uint16_t, p, 0xc0)) {
        FLD(int32_t, p, 0x90) = 2;
    } else if (FLD(uint16_t, p, 0xa0) == FLD(uint16_t, p, 0x98) && DIFF(p) == 1) {
        FLD(int32_t, p, 0x90) = 4;
    } else if (DIFF(p) == 1) {
        FLD(int32_t, p, 0x90) = 3;
    } else {
        FLD(int32_t, p, 0x90) = 0;
    }

    if (FLD(uint16_t, p, 0xd0) != 0 && FLD(uint16_t, p, 0xa0) != FLD(uint16_t, p, 0xd0)) {
        FLD(int32_t, p, 0xd4) = 0;
    }
    return 1;
}
