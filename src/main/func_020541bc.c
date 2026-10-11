#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02054680(void *p, uint32_t a, uint32_t b);
extern void func_02057a24(void *p, uint32_t b);
extern char data_020b0584[];
extern uint32_t data_0213e054[];

void func_020541bc(void)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x3c);
    if (p != 0) {
        func_02054680(p, 0, 1);
        *(void **)p = data_020b0584;
        func_02057a24(p + 0xc, 1);
        p[0x38] = 0;
    }
    data_0213e054[2] = (uint32_t)p;
    data_0213e054[0] = *(uint32_t *)0x02fffc20;
}
