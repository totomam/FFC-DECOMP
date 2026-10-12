#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
    uint32_t h;
} Args;

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int zero, uint32_t g, uint32_t d, uint32_t g2, uint32_t h);
extern char data_ov003_021794f4[];

void *func_ov003_0214ad7c(Args s)
{
    char *p = (char *)func_0205681c(0xa4);
    if (p != 0) {
        func_02056c9c(p, 0, s.g, s.d, s.g, s.h);
        *(void **)p = data_ov003_021794f4;
        *(uint32_t *)(p + 0x84) = s.a;
        *(uint32_t *)(p + 0x88) = s.b;
        *(uint32_t *)(p + 0x8c) = s.c;
        *(uint32_t *)(p + 0x90) = s.d;
        *(uint32_t *)(p + 0x94) = s.e;
        *(uint32_t *)(p + 0x98) = s.f;
        *(uint32_t *)(p + 0x9c) = s.g;
        *(uint32_t *)(p + 0xa0) = s.h;
    }
    return p;
}
