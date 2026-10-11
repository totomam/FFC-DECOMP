#include "ffc/types.h"

extern void func_02069434(void *p, int x);
extern char data_ov013_021c4a88[];

void *func_ov013_021c0a70(void *p, uint32_t a, uint32_t b)
{
    uint8_t *s = (uint8_t *)p;
    func_02069434(p, 0);
    *(char **)p = data_ov013_021c4a88;
    *(uint32_t *)(s + 0xb8) = a;
    *(uint32_t *)(s + 0xbc) = b;
    s[0xcc] = 0;
    s[0xcd] = 0;
    s[0xce] = 1;
    return p;
}
