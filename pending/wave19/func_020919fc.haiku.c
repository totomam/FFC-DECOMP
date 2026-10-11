#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);

typedef struct {
    uint8_t *base;
    uint32_t cap;
    uint32_t off;
} Buf;

uint32_t func_020919fc(Buf *p, const void *src, uint32_t len)
{
    uint32_t off = p->off;
    uint32_t n = len;
    if (off + len > p->cap) {
        n = p->cap - off;
    }
    func_02090380(p->base + off, src, n);
    p->off += n;
    return 1;
}
