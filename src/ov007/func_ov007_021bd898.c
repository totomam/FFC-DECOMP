#include "ffc/types.h"

extern void func_ov007_021bc310(void *self, int a, int b, int c, int d);
extern void *func_02056830(uint32_t size);
extern char data_ov007_021c7fd8[];

void *func_ov007_021bd898(void *self, int a, int b, int c, int d, int e)
{
    func_ov007_021bc310(self, a, e, c, d);
    *(void **)self = data_ov007_021c7fd8;
    *(int *)((char *)self + 0x1d8) = b;
    *(void **)((char *)self + 0x1dc) = func_02056830(0x5a0);
    *((uint8_t *)self + 0xb5) = 2;
    return self;
}
