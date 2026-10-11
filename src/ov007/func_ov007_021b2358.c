#include "ffc/types.h"

extern void func_ov007_021ae63c(int32_t x);
extern void *func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b2358(uint8_t *p)
{
    uint32_t *q = *(uint32_t **)(p + 0xbc);
    *q = 0;
    func_ov007_021ae63c(3);
    func_02056bc0(p + 0x14, func_02056aec(p));
}
