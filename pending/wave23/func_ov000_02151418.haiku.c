#include "ffc/types.h"

extern void *func_ov000_0215022c(void *p);
extern void func_ov000_0214fc54(uint16_t v);
extern void func_02087058(void *p);

void func_ov000_02151418(uint16_t *p)
{
    uint8_t *r4 = (uint8_t *)func_ov000_0215022c(p);
    if (p[0] == 0x12) {
        *(uint16_t *)(r4 + 0x24) = p[1];
        if (p[1] == 0) {
            func_ov000_0214fc54(p[1]);
        }
        func_02087058(r4 + 4);
    }
}
