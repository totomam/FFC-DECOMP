#include "ffc/types.h"

extern void func_ov007_021bc310(void *self, int a1, uint32_t a2, uint32_t a3, uint32_t a4);
extern void *func_0205681c(uint32_t size);
extern char data_ov007_021c80a8[];

void *func_ov007_021bcf08(void *self, int a1, uint32_t a2, uint32_t a3, void *p5, uint32_t a6, uint32_t a7)
{
    uint32_t *w = (uint32_t *)self;

    func_ov007_021bc310(self, a1, a7, a6, 0);
    *(void **)self = data_ov007_021c80a8;
    w[0x75] = a3;
    w[0x76] = (uint32_t)p5;
    w[0x77] = a2;
    ((uint8_t *)self)[0xb5] = 1;
    if (p5 != 0) {
        *(uint32_t *)p5 = 0;
    }
    w[0xb8] = (uint32_t)func_0205681c(0x24);
    return self;
}
