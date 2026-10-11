#include "ffc/types.h"

extern void func_ov001_0218dff4(void *p, uint32_t x);
extern char data_ov007_021c79b0[];

void *func_ov007_021bc148(void *p, uint32_t x, uint32_t a, uint32_t b, uint32_t c)
{
    func_ov001_0218dff4(p, x);
    *(char **)p = data_ov007_021c79b0;
    *(uint32_t *)((uint8_t *)p + 0xb0) = a;
    *(uint32_t *)((uint8_t *)p + 0xb4) = b;
    *(uint32_t *)((uint8_t *)p + 0xb8) = c;
    return p;
}
