#include "ffc/types.h"

extern void func_ov007_021bc310(void *self, int a, int b, int c, int d);
extern char data_ov007_021c80dc[];

void *func_ov007_021bce8c(void *self, int p1, uint32_t p2, uint32_t p3, int p4, int p5)
{
    uint8_t *obj = (uint8_t *)self;
    uint32_t off;
    func_ov007_021bc310(self, p1, p5, p4, 0);
    *(char **)obj = data_ov007_021c80dc;
    off = 0x1d4;
    *(uint32_t *)(obj + off) = p2;
    off += 4;
    *(uint32_t *)(obj + off) = p3;
    obj[0xb5] = 1;
    return self;
}
