#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S3;

extern void func_02059c94(uint32_t x, S3 s, uint32_t s5, uint32_t s6, uint32_t s7);
extern void func_0203b720(void);

void func_ov002_021b795c(uint8_t *p, S3 s, uint32_t s5, uint32_t s6, uint32_t s7)
{
    if (p[0x10e4]) {
        func_02059c94(*(uint32_t *)(p + 0x88), s, s5, s6, s7);
    } else {
        func_0203b720();
    }
}
