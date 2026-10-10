#include "ffc/types.h"

extern int32_t func_ov000_0216556c(int32_t a, void *b, void *c, int32_t d);

typedef struct {
    uint32_t x;
    uint32_t y;
    uint32_t z;
} S;

uint16_t func_ov001_021823d0(int32_t a, int32_t b, int32_t c, int32_t d) {
    S s;
    int32_t n = 8;
    int32_t r;
    s.x = n;
    r = func_ov000_0216556c(a, &s.y, &s.x, d);
    if (r == n - 9) {
        return 0;
    }
    return ((uint16_t *)&s)[3];
}
