#include "ffc/types.h"

extern uint8_t *data_020b8e44;
extern void *data_020b93b8;
extern void func_0201f1f0(void *a, uint8_t b, void *c);

void func_ov001_0218c520(uint8_t *self)
{
    func_0201f1f0(data_020b93b8, data_020b8e44[0xc], self + 0x67c);
    self[0xe94] = 1;
}
