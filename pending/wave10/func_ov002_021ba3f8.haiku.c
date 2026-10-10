#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern void func_ov002_021ba448(void *p, int x);
extern uint8_t data_ov002_021d64d8[];

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void *func_ov002_021ba3f8(uint32_t *self, int a1, uint32_t a2, S s)
{
    func_02056c9c(self, 0);
    self[0] = (uint32_t)data_ov002_021d64d8;
    self[0x20] = 0;
    self[0x21] = a2;
    self[0x22] = s.a;
    self[0x23] = s.b;
    self[0x24] = 0;
    func_ov002_021ba448(self, a1);
    return self;
}
