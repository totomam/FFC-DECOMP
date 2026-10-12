#include "ffc/types.h"

typedef struct {
    uint32_t remaining;
    int8_t *dst;
} Buf;

void func_0208c57c(Buf *s, int8_t *src, int32_t len) {
    if (len > 0) {
        uint32_t i;
        uint32_t n = s->remaining;
        if (n > (uint32_t)len) {
            n = len;
        }
        for (i = 0; i < n; i++) {
            s->dst[i] = src[i];
        }
        s->remaining -= n;
        s->dst += len;
    }
}
