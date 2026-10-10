#include "ffc/types.h"

extern uint32_t func_ov000_0216876c(uint32_t p);

typedef struct {
    uint32_t pad[4];
    void (*fn)(uint32_t);
} S;

void func_ov000_021686ac(uint32_t p)
{
    S *s = (S *)p;
    if (s->fn != 0) {
        uint32_t r = func_ov000_0216876c(p);
        s->fn(r);
    }
}
