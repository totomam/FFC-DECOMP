#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} S16;

extern void func_02021338(uint32_t x);
extern uint32_t func_02062ad0(void *p, S16 a, S16 b, uint32_t x, uint32_t y);

uint32_t func_ov005_02195e2c(uint8_t *p, S16 a, S16 b, uint32_t x, uint32_t y)
{
    if (p[0x3e] == 0) {
        func_02021338(0xb9);
    }
    return func_02062ad0(p, a, b, x, y);
}
