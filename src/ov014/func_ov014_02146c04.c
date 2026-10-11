/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_0207e770(void *obj);
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern int32_t func_0207eab0(void *obj, uint32_t a, uint32_t b);

typedef struct {
    uint32_t pad0;
    uint32_t pad4;
    uint32_t f8;
    void *fc;
    uint8_t f10;
} S;

int func_ov014_02146c04(S *s, uint32_t a, uint32_t b)
{
    int32_t r;
    int res;

    if (s->f10 == 1) {
        func_0207e770(s->fc);
        func_0207ea98(s->fc, s->f8, 0);
        s->f10 = 0;
    }
    r = func_0207eab0(s->fc, a, b);
    if (r == -1) {
        res = 0;
    } else {
        s->f8 += b;
        res = 1;
    }
    return res;
}
