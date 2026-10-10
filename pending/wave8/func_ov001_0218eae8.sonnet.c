#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203b708(int);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218eae8(void *self, void *node)
{
    void *a;
    void *b;
    uint8_t *s = (uint8_t *)self;
    void **p = (void **)(s + 0xb8);

    if (node == *p) {
        a = func_02056aec();
        b = func_0203b708(0x1e);
        func_02056bc0(s + 0x14, b);
        func_02056bc0(s + 0x14, a);
    }
}
