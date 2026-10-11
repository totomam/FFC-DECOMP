#include "ffc/types.h"

extern int32_t func_ov001_02181fcc(void *a, void *b, void *c, uint8_t *buf, uint32_t len);
extern uint8_t data_ov001_02191a24[];

typedef struct {
    uint8_t pad[0x40];
    int32_t mode;
} S;

int32_t func_ov001_02181b3c(S *p, void *a, void *b)
{
    uint32_t n = 0;
    uint8_t buf[8];
    uint8_t *src;
    uint8_t *dst;
    uint8_t *q;
    uint8_t *d;

    if (p->mode == 2) {
        *(uint16_t *)buf = 3;
        dst = buf + 2;
        src = dst - 2;
        dst[0] = src[0];
        n += 2;
        dst[1] = src[1];
    }
    d = data_ov001_02191a24;
    dst = buf + 2;
    q = dst + n;
    q[0] = d[0];
    q[1] = d[1];
    dst[n + 2] = 0x68;
    if (func_ov001_02181fcc(p, a, b, dst, n + 3) == 0) {
        return 0;
    }
    return 1;
}
