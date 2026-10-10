#include "ffc/types.h"

extern void func_ov009_021ad3cc(void *p, uint8_t v);
extern void func_ov009_021ada58(void *p);

void func_ov010_021cabb4(void *p)
{
    uint8_t v = ((uint8_t *)p)[640];
    func_ov009_021ad3cc(p, v);
    func_ov009_021ada58(p);
}
