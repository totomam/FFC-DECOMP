#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t zero, uint32_t x, uint32_t y, uint32_t z, uint32_t w);
extern char data_ov003_0217965c[];

typedef struct {
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S3;

void *func_ov003_0214c3d0(uint32_t a, S3 s, uint32_t e, uint32_t f)
{
    char *p = (char *)func_0205681c(0x9c);
    if (p == 0) {
        return p;
    }
    func_02056c9c(p, 0, s.d, s.d, s.d, e);
    *(void **)p = data_ov003_0217965c;
    *(uint32_t *)(p + 0x84) = a;
    *(uint32_t *)(p + 0x88) = s.b;
    *(uint32_t *)(p + 0x8c) = s.c;
    *(uint32_t *)(p + 0x90) = s.d;
    *(uint32_t *)(p + 0x94) = e;
    *(uint32_t *)(p + 0x98) = f;
    return p;
}
