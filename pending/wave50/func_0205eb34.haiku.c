#include "ffc/types.h"

extern void func_0205359c(void *object);
extern uint32_t func_02059484(void *obj, int flag, uint32_t arg);
extern char data_020b1060[];
extern char data_0213df20[];

void *func_0205eb34(void *self, void *arg1, uint32_t arg2)
{
    char *p = (char *)self;
    void *r4 = arg1;
    uint32_t *q;
    uint32_t z;

    *(uint32_t *)(p + 0xc) &= ~(uint32_t)0xff;
    z = 0;
    *(void **)p = data_020b1060;
    q = (uint32_t *)(p + 0x44);
    q[1] = z;
    q[2] = z;
    *(uint32_t *)(p + 0x1c) = z;
    *(uint32_t *)(p + 0x20) = z;
    *(uint32_t *)(p + 0x24) = z;
    *(uint32_t *)(p + 0x28) = z;
    *(uint32_t *)(p + 0x2c) = z;
    *(uint32_t *)(p + 0x30) = z;
    *(uint32_t *)(p + 0x34) = z;
    *(uint32_t *)(p + 0x38) = z;
    *(uint32_t *)(p + 0x3c) = z;
    *(uint32_t *)(p + 0x40) = z;
    *(uint32_t *)(p + 0x44) = z;
    func_0205359c(p + 0x50);
    func_0205359c(p + 0x68);
    if (r4 == 0) {
        r4 = *(void **)data_0213df20;
    }
    *(void **)(p + 0x14) = r4;
    *(uint32_t *)(p + 0x18) = func_02059484(*(void **)((char *)r4 + 0x14), 1, arg2);
    return p;
}
