#include "ffc/types.h"

extern void func_ov002_02198f28(void *a, void *b);
extern void *func_0205681c(uint32_t size);
extern void *func_0206df9c(void *p, int x);
extern void *func_ov002_02198eac(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern int data_ov002_021d49c4;
extern int data_ov002_021d49dc;

void *func_ov002_02198f80(void *self, void *arg) {
    uint8_t *s = (uint8_t *)self;
    uint8_t *p;
    void *n;
    void *x;

    func_ov002_02198f28(self, arg);
    *(void **)s = &data_ov002_021d49c4;
    *(void **)(s + 0x80) = &data_ov002_021d49dc;
    x = func_0205681c(0x29c);
    if (x != 0) {
        x = func_0206df9c(x, 0);
    }
    *(void **)(s + 0xb8) = x;
    n = func_0205681c(0xbc);
    if (n != 0) {
        x = *(void **)(s + 0xb8);
        if (x != 0) {
            x = (uint8_t *)x + 0x20;
        }
        n = func_ov002_02198eac(n, x, arg);
    }
    p = s + 0x48;
    func_02056bc0(p, *(void **)(s + 0xb8));
    func_02056bc0(p, n);
    return self;
}
