#include "ffc/types.h"

extern void func_02069434(void *a, uint32_t b);
extern void func_02087620(void *object);
extern char data_020ae6d4[];
extern char data_ov013_021c3eb8[];
extern char data_ov013_021c3eec[];

void *func_ov013_021bc8a0(void *a)
{
    uint32_t *s;
    uint32_t *t;

    func_02069434(a, 0);
    s = (uint32_t *)((uint8_t *)a + 0xb8);
    *(void **)((uint8_t *)a + 0xb8) = data_020ae6d4;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    t = s + 4;
    t[1] = 0;
    t[2] = 0;
    func_02087620((uint8_t *)s + 0x1c);
    *(void **)a = data_ov013_021c3eb8;
    *(void **)((uint8_t *)a + 0xb8) = data_ov013_021c3eec;
    return a;
}
