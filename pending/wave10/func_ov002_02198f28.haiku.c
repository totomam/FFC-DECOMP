#include "ffc/types.h"

extern void func_02056c9c(void *a, uint32_t b);
extern void func_02087620(void *object);
extern char data_020ae6d4[];
extern char data_ov002_021d49a0[];
extern char data_ov002_021d49b8[];

void *func_ov002_02198f28(void *a)
{
    uint32_t *s;
    uint32_t *t;

    func_02056c9c(a, 0);
    s = (uint32_t *)((uint8_t *)a + 0x80);
    *(void **)((uint8_t *)a + 0x80) = data_020ae6d4;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    t = s + 4;
    t[1] = 0;
    t[2] = 0;
    func_02087620((uint8_t *)s + 0x1c);
    *(void **)a = data_ov002_021d49a0;
    *(void **)((uint8_t *)a + 0x80) = data_ov002_021d49b8;
    return a;
}
