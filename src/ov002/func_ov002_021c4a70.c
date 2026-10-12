#include "ffc/types.h"

extern void func_02005988(uint32_t *buf, uint32_t arg);
extern void func_020218c8(void *obj, uint32_t *buf, int a, int b);
extern void *func_020059cc(void *object);
extern uint32_t func_ov002_02198694(uint32_t arg);
extern uint32_t func_ov002_02199268(void);
extern char data_ov002_021d739c[];

void *func_ov002_021c4a70(void *a0, uint32_t a1, uint32_t a2)
{
    uint32_t buf[3];
    uint8_t *self = (uint8_t *)a0;

    func_02005988(buf, a2);
    func_020218c8(self, buf, 1, 1);
    func_020059cc(buf);
    *(void **)self = data_ov002_021d739c;
    *(uint32_t *)(self + 0xe8) = a1;
    *(uint8_t *)(self + 0xf4) = 0;
    *(uint32_t *)(self + 0xec) = func_ov002_02198694(a1);
    *(uint32_t *)(self + 0xf0) = func_ov002_02199268();
    return self;
}
