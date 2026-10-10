#include "ffc/types.h"

extern int func_ov000_0216876c(void *p);

typedef struct {
    uint32_t pad[4];
    void (*fn)(int);
} S;

void func_ov000_021686ac(S *s)
{
    if (s->fn) {
        s->fn(func_ov000_0216876c(s));
    }
}
