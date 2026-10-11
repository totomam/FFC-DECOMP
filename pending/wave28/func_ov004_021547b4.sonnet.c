#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t v);
extern char data_ov004_0215989c[];

typedef struct {
    uint32_t b;
    uint32_t c;
} S2;

void *func_ov004_021547b4(uint32_t a, S2 s, uint32_t d, uint8_t e)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x98);
    if (p) {
        func_02056c9c(p, 0);
        *(char **)p = data_ov004_0215989c;
        *(uint32_t *)(p + 0x84) = a;
        *(uint32_t *)(p + 0x88) = s.b;
        *(uint32_t *)(p + 0x8c) = s.c;
        *(uint32_t *)(p + 0x90) = d;
        *(uint8_t *)(p + 0x94) = e;
    }
    return p;
}
