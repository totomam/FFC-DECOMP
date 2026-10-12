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
typedef struct { uint32_t a,b,c,d; } G;
extern G data_ov001_02194524;
typedef struct { uint32_t x,y; } P;

void *func_ov001_02189ae4(void *a) {
    uint8_t *s = (uint8_t *)a;
    uint32_t *b;
    const G *g;

    uint32_t z = 0;
    uint32_t *y;
    func_ov001_0218dff4(a, 0);
    b = (uint32_t *)(s + 0xb0);
    *(void **)(s + 0xb0) = (void *)data_020ae6d4;
    y = b + 4;
    b[1] = z;
    b[2] = z;
    b[3] = z;
    b[4] = z;
    y[1] = z;
    y[2] = z;
    func_02087620(b + 7);
    *(void **)s = (void *)data_ov001_0219456c;
    ((void **)s)[0x2c] = (void *)data_ov001_021945dc;
    *(uint32_t *)(s + 0xf0) = z;
    func_0209cf5c(s + 0x104, 2, 0x2d8, (void *)func_ov001_02189b7c, (void *)func_ov001_02189ba8);
    func_02036750(s + 0x6cc);
    s[0x724] = 0;
    g = &data_ov001_02194524;
    {
        uint32_t u = g->c;
        uint32_t v = g->d;
        ((P *)(s + 0xf4))->x = u;
        ((P *)(s + 0xf4))->y = v;
    }
    return s;
}
