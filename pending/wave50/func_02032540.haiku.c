#include "ffc/types.h"

extern void func_02056c9c(void *p);
extern void func_020095b8(void *p, uint32_t v);
extern char data_020ae0f8[];

void *func_02032540(void *self, uint32_t u1, ...)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t *ap = &u1;
    uint8_t *s3p = (uint8_t *)&ap[6];
    uint32_t r2;
    func_02056c9c(self);
    r2 = ap[1];
    *(void **)p = data_020ae0f8;
    *(uint32_t *)(p + 0x88) = r2;
    *(uint32_t *)(p + 0x8c) = ap[2];
    func_020095b8(p + 0x90, ap[3]);
    *(uint32_t *)(p + 0x9c) = ap[4];
    *(int32_t *)(p + 0xa0) = -1;
    *(uint8_t *)(p + 0xa4) = 0;
    *(uint32_t *)(p + 0xa8) = ap[5];
    *(uint32_t *)(p + 0xb0) = 0;
    *(uint8_t *)(p + 0xb4) = s3p[0];
    *(uint8_t *)(p + 0xb5) = 0;
    *(uint8_t *)(p + 0xb6) = 0;
    *(uint32_t *)(p + 0xb8) = 0;
    return self;
}
