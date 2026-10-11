#include "ffc/types.h"

extern void func_02090398(uint8_t *dst, uint8_t *src, uint32_t n);

typedef struct {
    uint8_t *buf;
    uint32_t pad;
    int32_t size;
} S;

void func_ov001_0217fe60(S *p, int32_t off, int32_t n)
{
    int32_t o = off;
    if (off == -1) {
        o = p->size - n;
    }
    func_02090398(p->buf + o, p->buf + o + n, p->size - o - n);
    p->size -= n;
}
