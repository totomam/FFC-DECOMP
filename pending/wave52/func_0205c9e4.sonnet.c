#include "ffc/types.h"
extern void func_02090398(void *dst, void *src, uint32_t n);
typedef struct { uint32_t *cur; uint32_t *start; uint32_t *lo; uint32_t *hi; } Ring;
static inline uint32_t *pick(uint32_t *c, uint32_t *lo, uint32_t *hi, uint32_t *ec, uint32_t *elo)
{
    return ((c >= lo) == (ec >= elo)) ? ec : hi;
}
uint8_t *func_0205c9e4(Ring r, Ring e, uint8_t *dst)
{
    uint32_t **pc = &r.cur;
    uint32_t cnt, bytes;
    if (r.cur == e.cur) return dst;
    do {
        cnt = pick(r.cur, r.lo, r.hi, e.cur, e.lo) - r.cur;
        bytes = ((r.cur + cnt) - r.cur) * 4;
        func_02090398(dst, r.cur, bytes);
        dst += bytes;
        *pc = *pc + (cnt - 1);
        r.cur = *pc + 1;
        if (r.cur == r.hi) r.cur = r.start;
    } while (r.cur != e.cur);
    return dst;
}
