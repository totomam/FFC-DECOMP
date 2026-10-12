#include "ffc/types.h"

extern int32_t func_ov000_0214ecc8(void *p);
extern int32_t func_ov000_0214d1d8(void (*fn)(void), int32_t v, int32_t b);
extern int32_t func_ov000_0214d2b8(int32_t v);
extern void func_ov000_0214e408(void);

typedef struct {
    uint8_t pad0[0xa4];
    uint8_t *sub;
    uint8_t pad1[4];
    int16_t flags;
    int8_t val;
} Obj;

typedef struct {
    uint8_t pad[0x10c];
    int32_t field;
} Sub;

int32_t func_ov000_0214e380(Obj *p)
{
    int32_t r2;
    Sub *q;
    int32_t r;

    if (func_ov000_0214ecc8(p) != 0) {
        return -28;
    }

    r2 = 0;
    if (p != 0 && (p->flags & 1)) {
        r2 = 1;
    }
    if (r2 == 0) {
        return -39;
    }

    if (!(p->flags & 4)) {
        return -56;
    }
    if (p->flags & 8) {
        return -56;
    }
    p->flags |= 8;

    q = (Sub *)p->sub;
    if (q == 0) {
        return 0;
    }
    if (q->field == 0) {
        return 0;
    }
    r = func_ov000_0214d1d8(func_ov000_0214e408, q->field, p->val);
    if (r != 0) {
        return func_ov000_0214d2b8(q->field);
    }
    return -33;
}
