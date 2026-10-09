#include "ffc/types.h"

extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);

void func_ov002_021b86d8(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    void *node = func_02056aec(p);
    func_02056bc0(obj + 0x14, node);
}
