#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S2;

extern void func_02059c94(uint32_t x, S2 s, S2 t, uint32_t s5, uint32_t s6);
extern void func_0203b720(void);

void func_ov002_021b795c(uint8_t *p, S2 s, S2 t, uint32_t s5, uint32_t s6)
{
    if (p[0x10e4]) {
        func_02059c94(*(uint32_t *)(p + 0x88), s, t, s5, s6);
    } else {
        func_0203b720();
    }
}
