#include "ffc/types.h"

extern uint32_t func_01fff010(void *obj, uint32_t a, uint32_t b);
extern int32_t func_01ffb294(void *obj, uint32_t a, uint32_t b);
extern int32_t func_01ffae0c(void *obj, int32_t a, int32_t b);
extern int32_t func_01ffad94(void *obj);
extern int32_t func_01ffb214(void *obj, int32_t a, uint32_t b, uint32_t c);
extern void func_01ffb1a0(uint32_t *out, void *obj, int32_t a, uint32_t b, uint32_t c);
extern uint32_t func_020817c8(uint32_t first, uint32_t second);
extern void func_01ffb188(void *obj, int32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov004_02159374;

#define SUB84(o) (*(void **)((uint8_t *)(o) + 0x84))

void func_ov004_0214d834(uint32_t *out, void *obj, uint32_t a2, uint32_t a3, uint32_t a5, int32_t a6)
{
    int32_t r4;
    int32_t sc;
    int32_t e1;
    int32_t end;
    uint32_t c;
    uint32_t v;
    uint32_t tmp;

    *out = a5;
    v = 0x1000;
    if (func_01fff010(obj, a2, a3) != 0) {
        return;
    }
    r4 = func_01ffae0c(SUB84(obj), func_01ffb294(SUB84(obj), a2, a3), a6);
    sc = -1;
    e1 = 1;
    if (a6 == 1) {
        sc = 1;
        e1 = func_01ffad94(SUB84(obj)) - 1;
    }
    end = e1 + sc;
    if (r4 == end) {
        return;
    }
    c = 0x1000 - a5;
    while (r4 != end) {
        if (func_01ffb214(SUB84(obj), r4, a2, a3) == 0) {
            func_01ffb1a0(&tmp, SUB84(obj), r4, a2, a3);
            (void)func_020817c8(tmp, *out);
            func_01ffb188(SUB84(obj), r4, a2, a3);
            v = func_020817c8(v, data_ov004_02159374);
            *out = 0x1000 - func_020817c8(c, v);
        }
        r4 += sc;
    }
}
