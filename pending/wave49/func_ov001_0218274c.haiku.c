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
        r = 0;
    } else if (s == FLD(uint32_t, p, 0x94)) {
        r = 1;
    } else {
        int hit = 0;
        r6 = FLD(int32_t, p, 0x80);
        if (r6 == 0 && r4 == 0 && func_0208f68c(DIFF(p)) >= 1) {
            FLD(int32_t, p, 0x8c) = 5;
            r = 0;
            hit = 1;
        } else if (r6 != 0 && r4 == 0 && func_0208f68c(DIFF(p)) >= 1) {
            FLD(int32_t, p, 0x8c) = 5;
            r = 2;
            hit = 1;
        } else if (r6 == 0 && r4 != 0 && func_0208f68c(DIFF(p)) >= 1) {
            FLD(int32_t, p, 0x8c) = 5;
            r = 3;
            hit = 1;
        } else if (r6 != 0 && r4 != 0 && func_0208f68c(DIFF(p)) >= 1) {
            FLD(int32_t, p, 0x8c) = 5;
            r = 1;
            hit = 1;
        }
        if (hit) {
            goto s88;
        }
        if (r4 != 0) {
            r = 4;
        } else if (r6 != 0) {
            r = 3;
        } else {
            r = 2;
        }
    }
    FLD(int32_t, p, 0x8c) = r;
    goto check;
s88:
    FLD(int32_t, p, 0x88) = r;

check:
    if (FLD(uint16_t, p, 0x98) == FLD(uint16_t, p, 0xa0) &&
        FLD(uint16_t, p, 0xb0) == FLD(uint16_t, p, 0xa8) &&
        FLD(uint16_t, p, 0xc0) == FLD(uint16_t, p, 0xb8)) {
        r = 1;
    } else if (FLD(uint16_t, p, 0xa0) == FLD(uint16_t, p, 0xb0) &&
               FLD(uint16_t, p, 0xb0) == FLD(uint16_t, p, 0xc0)) {
        r = 2;
    } else if (FLD(uint16_t, p, 0xa0) == FLD(uint16_t, p, 0x98) && DIFF(p) == 1) {
        r = 4;
    } else if (DIFF(p) == 1) {
        r = 3;
    } else {
        r = 0;
    }
    FLD(int32_t, p, 0x90) = r;

    if (FLD(uint16_t, p, 0xd0) != 0 && FLD(uint16_t, p, 0xa0) != FLD(uint16_t, p, 0xd0)) {
        FLD(int32_t, p, 0xd4) = 0;
    }
    return 1;
}
