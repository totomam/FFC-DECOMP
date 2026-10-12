#include "ffc/types.h"

extern int32_t func_ov000_0214f204(void *s, int32_t a, int32_t b, int32_t c);

typedef struct {
    void *p;
    int16_t flags;
    int16_t out;
} S;

int32_t func_ov000_021655ac(void *p, int32_t *pa, int32_t *pb, int32_t *pc)
{
    S s;
    int32_t r;

    s.p = p;
    s.flags = 0;
    if (pa != 0) {
        s.flags = s.flags | 1;
    }
    if (pb != 0) {
        s.flags = s.flags | 8;
    }
    s.out = 0;
    r = func_ov000_0214f204(&s, 1, 0, 0);
    if (r < 0) {
        return -1;
    }
    if (pa != 0) {
        if (r > 0 && (s.out & 0x41)) {
            *pa = 1;
        } else {
            *pa = 0;
        }
    }
    if (pb != 0) {
        if (r > 0 && (s.out & 8)) {
            *pb = 1;
        } else {
            *pb = 0;
        }
    }
    if (pc != 0) {
        if (r > 0 && (s.out & 0x20)) {
            *pc = 1;
            return r;
        }
        *pc = 0;
    }
    return r;
}
