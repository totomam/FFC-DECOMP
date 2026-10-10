#include "ffc/types.h"

typedef struct {
    int32_t cur;
    int32_t base;
    int32_t unused;
    int32_t end;
} Ring;

void func_0205cac8(Ring *r, int32_t idx) {
    int32_t n = (r->end - r->base) / 4;
    int32_t t = idx + (r->cur - r->base) / 4;
    if (t < 0) {
        t += n;
    } else if (t >= n) {
        t -= n;
    }
    r->cur = r->base + t * 4;
}
