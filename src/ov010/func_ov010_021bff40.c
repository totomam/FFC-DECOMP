#include "ffc/types.h"

extern void func_02069528(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02036750(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_ov010_021c0084(void *self, uint32_t a, uint32_t b);
extern void func_ov010_021c0154(void *self, uint32_t *a, uint32_t b);
extern void func_ov010_021c0270(void *self, uint32_t *a, uint32_t flag, uint32_t val);
extern void *data_0213df18;
extern uint32_t data_ov010_021d1acc[];
extern uint32_t data_ov010_021d1a20[];

void *func_ov010_021bff40(void *self, uint32_t *p)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t *q;
    void *r;
    uint32_t f;

    func_02069528(self, ((uint32_t *)data_0213df18)[8], 0, 0);
    *(uint32_t *)s = (uint32_t)data_ov010_021d1acc;
    {
        uint32_t *b = (uint32_t *)(s + 0xf4);
        *(uint32_t *)(s + 0xbc) = 0;
        b[1] = 0;
        b[2] = 0;
        *(uint32_t *)(s + 0xf4) = 0;
    }
    *(uint32_t *)(s + 0x10c) = p[1];
    *(uint32_t *)(s + 0x110) = 0;
    *(uint32_t *)(s + 0x114) = p[4];
    s[0x118] = 0xff;
    s[0x119] = 0;
    func_02036750(s + 0x124);
    *(uint32_t *)(s + 0x17c) = (uint32_t)p;
    r = func_0205681c(8);
    if (r != 0) {
        *(uint32_t *)r = (uint32_t)data_ov010_021d1a20;
        ((uint32_t *)r)[1] = (uint32_t)self;
    }
    *(void **)(s + 0x180) = r;
    q = *(uint32_t **)(s + 0x17c);
    switch (q[0]) {
    case 0:
        func_ov010_021c0084(self, q[1], q[5]);
        break;
    case 1:
        func_ov010_021c0154(self, q + 1, q[5]);
        break;
    case 2:
        f = ((uint8_t *)q)[0xc];
        if (f == 0) {
            func_ov010_021c0270(self, q + 1, f, ((uint8_t *)q)[8]);
        } else {
            func_ov010_021c0270(self, q + 1, f, ((uint8_t *)q)[9]);
        }
        break;
    }
    return self;
}
