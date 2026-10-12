#include "ffc/types.h"

extern int func_020559d4(void *p);
extern void func_ov001_0218def8(void *p, int x);

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern S8 data_ov001_02194638;
extern S8 data_ov001_02194640;

void func_ov001_0218a6bc(void *self) {
    uint8_t *p;
    int r = ((int (*)(void *))(*(void ***)self)[13])(self);
    p = (uint8_t *)self;
    if (r != 0) {
        *(S8 *)(p + 0xf4) = data_ov001_02194638;
        return;
    }

    func_020559d4(p + 0xb0);
    if (p[0x106] != 0 && p[0x3de] != 0) {
        func_ov001_0218def8(p, 0);
        ((void (*)(void *))(*(void ***)self)[20])(self);
        *(S8 *)(p + 0xf4) = data_ov001_02194640;
    }
}
