#include "ffc/types.h"

extern void func_ov009_021ad3cc(void *p, uint8_t v);
extern void func_ov009_021ada58(void *p);
extern void func_ov011_021c2e64(void *p);

void func_ov011_021c144c(uint8_t *p)
{
    func_ov009_021ad3cc(p, p[0x280]);
    func_ov009_021ada58(p);
    func_ov011_021c2e64(p);
}
