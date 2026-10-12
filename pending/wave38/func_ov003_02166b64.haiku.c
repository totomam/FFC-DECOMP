#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t z);
extern char data_ov003_0217b184[];

void *func_ov003_02166b64(void *self, uint32_t a, uint32_t b, uint32_t c,
                         uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                         uint32_t s4, uint32_t s5, uint32_t s6, uint32_t s7,
                         uint32_t s8, uint32_t s9, uint8_t f)
{
    char *p = (char *)self;
    func_02056c9c(self, 0);
    *(void **)p = data_ov003_0217b184;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
    *(uint32_t *)(p + 0x88) = c;
    *(uint32_t *)(p + 0x8c) = s0;
    *(uint32_t *)(p + 0x90) = s1;
    *(uint32_t *)(p + 0x94) = s2;
    *(uint32_t *)(p + 0x98) = s3;
    *(uint32_t *)(p + 0x9c) = s4;
    *(uint32_t *)(p + 0xa0) = s5;
    *(uint32_t *)(p + 0xa4) = s6;
    *(uint32_t *)(p + 0xa8) = s7;
    *(uint32_t *)(p + 0xac) = s8;
    *(uint32_t *)(p + 0xb0) = s9;
    *(uint8_t *)(p + 0xb4) = f;
    return self;
}
