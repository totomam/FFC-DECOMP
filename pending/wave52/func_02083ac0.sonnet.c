#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_02083760(void *self);

typedef struct {
    uint32_t pad[4];
    uint64_t count;
    uint8_t buf[0x40];
} Stream;

void func_02083ac0(Stream *s, uint8_t *dst, uint32_t n)
{
    uint64_t *pc = &s->count; uint32_t off = (uint32_t)*pc & 0x3f;
    uint32_t space;
    uint32_t blocks;

    *pc = *pc + n;
    space = 0x40 - off;
    if (space > n) {
        if (n == 0) return;
        func_02084ca4(dst, s->buf + off, n);
        return;
    }
    func_02084ca4(dst, s->buf + off, space);
    func_02083760(s);
    dst += space;
    n -= space;
    blocks = n >> 6;
    while ((int)blocks > 0) {
        func_02084ca4(dst, s->buf, 0x40);
        dst += 0x40;
        func_02083760(s);
        blocks--;
    }
    if (n & 0x3f) {
        func_02084ca4(dst, s->buf, n & 0x3f);
    }
}
