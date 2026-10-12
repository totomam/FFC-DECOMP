#include "ffc/types.h"

typedef struct {
    uint32_t count;
    uint8_t *buf;
} FillState;

void func_0208c54c(FillState *s, uint8_t val, int32_t n)
{
    uint32_t i;
    uint32_t m;

    if (n <= 0) {
        return;
    }
    m = s->count;
    if (m > (uint32_t)n) {
        m = n;
    }
    for (i = 0; i < m; i++) {
        s->buf[i] = val;
    }
    s->count -= m;
    s->buf += n;
}
