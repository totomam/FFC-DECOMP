#include "ffc/types.h"

extern void func_02087620(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02028dd4(void *p, void *a, void *b);
extern void func_0202f5f8(void);
extern void func_02022a60(void *self, void *x);
extern char data_020ad770[];

void *func_02022924(void *self, void *a, void *b, void *c)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t *w = (uint32_t *)self;
    uint32_t *list = (uint32_t *)(p + 0x4c);
    void *ret;

    w[0] = (uint32_t)data_020ad770;
    w[3] = (w[3] & ~0xffu);
    w[7] = 0x320000;
    w[5] = 1;
    p[0x20] = 1;
    list[2] = (uint32_t)&list[1];
    list[1] = (uint32_t)&list[1];
    w[6] = 0;
    list[0] = 0;
    w[0x82] = (uint32_t)c;
    func_02087620(p + 0x220);
    p[0x208 + 0x4c] = 0;
    p[0x208 + 0x4d] = 0;
    w[0x82 + 0x15] = 0;

    ret = func_0205681c(0x18);
    if (ret != 0) {
        ret = func_02028dd4(ret, a, b);
    }
    w[0x87] = (uint32_t)ret;
    func_0202f5f8();
    func_02022a60(p, c);
    return p;
}
