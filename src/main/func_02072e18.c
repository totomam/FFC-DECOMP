#include "ffc/types.h"

extern void func_ov000_0215b37c(void);
typedef void (*Fn)(int32_t, int32_t, int32_t, int32_t, void *, void *);
typedef struct { uint8_t pad[0x88]; Fn fn; void *arg; int32_t state; } S;

void func_02072e18(int32_t a0, int32_t a1, int32_t a2, int32_t a3, void *a4, uint32_t a5)
{
    if (a0 != 0) return;
    {
        S *s = (S*)a5;
        Fn f = s->fn;
        if (f != 0) {
            f(a0, a1 != 0, a2 != 0, a3 != 0, a4, s->arg);
        }
        if (a1 != 0) {
            func_ov000_0215b37c();
            s->state = 3;
        } else {
            s->state = 2;
        }
    }
}
