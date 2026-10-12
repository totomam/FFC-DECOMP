/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" int32_t func_020817c8(int32_t first, int32_t second);
struct Buf { uint8_t b[0x10c]; Buf() {} ~Buf() { (void)&b[0]; } };
inline int use(const Buf &x, int v) { return v; }

typedef struct { int32_t a0; int32_t a1; int32_t a2; } S3;
typedef struct { int32_t b0; int32_t b1; int32_t b2; int32_t b3; } S4;

extern "C" int func_ov003_021475cc(S3 *a, S4 *b) {
    int32_t sum = 0;
    int32_t d;
    Buf buf;

    if (a->a0 < b->b0) {
        d = b->b0 - a->a0;
        sum += func_020817c8(d, d);
    }
    if (a->a0 > b->b2) {
        d = a->a0 - b->b2;
        sum += func_020817c8(d, d);
    }
    if (a->a1 < b->b1) {
        d = b->b1 - a->a1;
        sum += func_020817c8(d, d);
    }
    if (a->a1 > b->b3) {
        d = a->a1 - b->b3;
        sum += func_020817c8(d, d);
    }
    if (sum < use(buf, func_020817c8(a->a2, a->a2))) {
        return 1;
    }
    return 0;
}
