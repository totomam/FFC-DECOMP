#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern void func_020095b8(void *p, void *q);
extern char data_020ae098[];

typedef struct {
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint8_t f;
} S;

void *func_02033094(uint8_t *self, void *a, uint32_t b, S s)
{
    func_02056c9c(self, 0);
    *(char **)self = data_020ae098;
    func_020095b8(self + 0x80, a);
    *(uint32_t *)(self + 0x8c) = 0;
    *(uint32_t *)(self + 0x90) = b;
    *(uint32_t *)(self + 0x94) = s.c;
    *(uint32_t *)(self + 0x98) = s.d;
    *(uint32_t *)(self + 0x9c) = s.e;
    *(uint8_t *)(self + 0xa0) = s.f;
    return self;
}
