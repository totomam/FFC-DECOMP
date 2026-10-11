#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S3;

extern void func_0206a510(S3 *out, uint8_t *p, S3 *in);

void func_02069670(uint8_t *p, uint32_t x, uint32_t y, uint32_t z) {
    S3 in;
    S3 out;
    if (x != 0) {
        out.b = y;
        out.c = z;
        in.a = x;
        in.b = y;
        in.c = z;
        func_0206a510(&out, p + 0xa4, &in);
    }
}
