#include "ffc/types.h"

extern void func_0203775c(void *buf);
extern void func_02037fec(void *dst, void *src);
extern void *func_02037f40(void *object);

void func_02037fac(void *param_1)
{
    uint8_t buf[0x32c];
    uint32_t *p;
    int i;

    p = (uint32_t *)param_1;
    func_0203775c(buf);
    func_02037fec((uint8_t *)param_1 + 8, buf);
    func_02037f40(buf);
    for (i = 0; i < 2; i++) {
        p[0xCD + i] = 0;
        p[0xCF + i] = 0;
    }
}
