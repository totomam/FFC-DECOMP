#include "ffc/types.h"

extern uint32_t func_0204b780(void *a, uint32_t b);
extern uint32_t func_0204dc68(void *a, void *b);
extern void func_0204dd14(void *a, uint32_t b);

uint32_t func_0204c148(void *p, void *s)
{
    uint32_t *w = (uint32_t *)s;
    uint32_t ret = 0;
    uint32_t x = func_0204b780(s, w[1]);
    uint32_t r;
    if (w[7] == 0 || w[10] == 0) {
        goto L20;
    }
    if (x == 0) {
        goto one;
    }
L20:
    r = func_0204dc68(p, s);
    if (r == 0) {
        goto end;
    }
    func_0204dd14(p, r);
    if (w[10] == 0) {
        goto end;
    }
    if (w[7] == 0) {
        goto end;
    }
    if (func_0204b780(s, w[1]) != 0) {
        goto end;
    }
one:
    ret = 1;
end:
    return ret;
}
