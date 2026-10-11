#include "ffc/types.h"

extern void func_020095b8(void *p, uint32_t a, uint32_t b);
extern void func_02009b3c(void *self, void *a, void *tmp, uint32_t d);
extern void *func_020059cc(void *object);
extern char data_ov004_02157e70[];

void *func_ov004_02147584(void *self, void *a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t buf[3];

    func_020095b8(buf, c, b);
    func_02009b3c(self, a, buf, d);
    func_020059cc(buf);
    *(char **)self = data_ov004_02157e70;
    *(uint32_t *)((uint8_t *)self + 0xb0) = b;
    return self;
}
