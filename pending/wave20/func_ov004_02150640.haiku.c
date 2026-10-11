#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t d;
} Args;

void func_ov004_02150640(int32_t *out, Args s) {
    int32_t c = s.a + s.b + 1;
    int32_t m = c % 2;
    out[0] = (s.a - 1) / 2;
    out[1] = s.b - m;
    out[2] = m;
}
