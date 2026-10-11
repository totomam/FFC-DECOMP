#include "ffc/types.h"

typedef struct {
    uint8_t *buf;
    uint32_t pad;
    uint32_t len;
} Buf;

void func_ov001_0217fe0c(Buf *p, int32_t v)
{
    uint32_t n = p->len;
    p->len = n + 1;
    p->buf[n] = (uint8_t)(v >> 8);
    n = p->len;
    p->len = n + 1;
    p->buf[n] = (uint8_t)v;
}
