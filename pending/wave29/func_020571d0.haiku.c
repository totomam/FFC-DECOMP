#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t func_02081210(uint32_t a, uint32_t b);

typedef struct {
    uint32_t pad[7];
    int32_t f1c;
    uint32_t pad2[5];
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
} Obj;

void func_020571d0(Obj *s, int32_t r1) {
    int32_t n = s->f1c - 1;
    uint32_t r5;
    uint32_t t;
    if (r1 == n) {
        s->f34 = s->f3c;
        return;
    }
    r5 = (uint32_t)n << 12;
    t = func_020817c8(1 << 12, r1 << 12);
    t = func_02081210(t, r5);
    t = func_020817c8(s->f3c - s->f38, t);
    s->f34 = s->f38 + t;
}
