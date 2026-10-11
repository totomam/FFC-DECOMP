#include "ffc/types.h"

typedef struct {
    uint16_t count;
    uint8_t f2;
    uint8_t f3;
} Hdr;

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);

void func_ov006_021b3eb8(int n)
{
    Hdr *p = (Hdr *)func_ov006_021b49e4((uint32_t)((n + 1) << 2) + 8, 4);
    p->count = (uint16_t)(n + 1);
    p->f2 = 0;
    p->f3 = 0;
}
