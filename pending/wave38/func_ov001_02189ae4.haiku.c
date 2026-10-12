#include "ffc/types.h"

extern void func_ov001_0218dff4(void *obj, int x);
extern void func_02087620(void *object);
extern void func_0209cf5c(void *p, int a, int b, void *c, void *d);
extern void func_02036750(void *p);
extern char data_020ae6d4[];
extern char data_ov001_0219456c[];
extern char data_ov001_021945dc[];
extern void func_ov001_02189ba8(void);
extern void func_ov001_02189b7c(void);
extern uint32_t data_ov001_02194524[];

void *func_ov001_02189ae4(void *a) {
    uint8_t *s = (uint8_t *)a;
    uint32_t *b;
    const uint32_t *g;

    func_ov001_0218dff4(a, 0);
    ((void **)s)[0x2c] = (void *)data_020ae6d4;
    b = (uint32_t *)(s + 0xb0);
    b[1] = 0;
    b[2] = 0;
    b[3] = 0;
    b[4] = 0;
    func_02087620(b + 7);
    b[5] = 0;
    b[6] = 0;
    *(void **)s = (void *)data_ov001_0219456c;
    ((void **)s)[0x2c] = (void *)data_ov001_021945dc;
    *(uint32_t *)(s + 0xf0) = 0;
    func_0209cf5c(s + 0x104, 2, 0x2d8, (void *)func_ov001_02189b7c, (void *)func_ov001_02189ba8);
    func_02036750(s + 0x6cc);
    s[0x724] = 0;
    g = data_ov001_02194524;
    *(uint32_t *)(s + 0xf4) = g[2];
    *(uint32_t *)(s + 0xf8) = g[3];
    return s;
}
