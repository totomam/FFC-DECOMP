#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v);
extern uint8_t data_ov003_0217ac8c[];

typedef struct {
    uint32_t d;
    uint32_t e;
    uint8_t b8;
    uint8_t pad9[3];
    uint8_t b12;
    uint8_t pad13[3];
    uint32_t f;
    uint8_t b14;
    uint8_t pad15[3];
    uint8_t b18;
    uint8_t pad19[3];
} S;

void func_ov003_02167a34(uint8_t *self, uint32_t a, uint32_t b, uint32_t c, S s)
{
    func_02056c9c(self, 0);
    *(uint32_t *)self = (uint32_t)data_ov003_0217ac8c;
    *(uint32_t *)(self + 0x80) = a;
    *(uint32_t *)(self + 0x84) = b;
    *(uint32_t *)(self + 0x88) = c;
    *(uint32_t *)(self + 0x8c) = s.d;
    *(uint32_t *)(self + 0x90) = s.e;
    *(uint32_t *)(self + 0x94) = 0;
    *(uint32_t *)(self + 0x98) = s.f;
    self[0x9d] = s.b12;
    self[0x9e] = s.b8;
    self[0x9f] = s.b14;
    self[0xa0] = s.b18;
}
