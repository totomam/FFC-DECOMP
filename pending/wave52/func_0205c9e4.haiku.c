#include "ffc/types.h"

extern void func_02090398(void *dst, void *src, uint32_t n);

typedef struct {
    uint32_t *cur;
    uint32_t *start;
    uint32_t *lo;
    uint32_t *hi;
} Ring;

uint8_t *func_0205c9e4(Ring r, uint32_t *end, uint32_t a5, uint32_t *a6, uint32_t a7, uint8_t *dst)
{
    uint32_t **pc;
    uint32_t cnt;
    uint32_t bytes;

    pc = &r.cur;
    if (r.cur == end) {
        return dst;
    }
    do {
        cnt = ((r.cur >= r.lo) == (end >= a6) ? end : r.hi) - r.cur;
        bytes = ((r.cur + cnt) - r.cur) * 4;
        func_02090398(dst, r.cur, bytes);
        dst += bytes;
        *pc = *pc + (cnt - 1);
        r.cur = *pc + 1;
        if (r.cur == r.hi) {
            r.cur = r.start;
        }
    } while (r.cur != end);
    return dst;
}
