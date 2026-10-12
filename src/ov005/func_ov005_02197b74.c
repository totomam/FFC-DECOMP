/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {

extern void func_020694ac(void *self, uint32_t a, uint32_t b);
extern void func_020695e4(void *self, uint32_t a);
extern uint8_t data_ov005_021995ec[];

void *func_ov005_02197b74(void *self, uint32_t p1, uint32_t p2)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t *q;
    uint16_t i;

    func_020694ac(self, 0, 0);
    *(void **)s = (void *)data_ov005_021995ec;
    *(uint32_t *)(s + 0xb8) = 0;
    *(uint32_t *)(s + 0xfc) = 0;
    *(uint32_t *)(s + 0x100) = 0;
    s[0x104] = 0;
    q = (uint32_t *)(s + 0x114);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q = (uint32_t *)(s + 0x13c);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    s[0x148] = 0xff;
    s[0x149] = 0;
    s[0x14a] = 0;
    *(uint32_t *)(s + 0x14c) = p2;
    *(uint32_t *)(s + 0x150) = p1;
    for (i = 0; i < 0x40; i++) {
        s[0xbc + i] = 0;
    }
    if (*(uint32_t *)(s + 0x150) == 1) {
        func_020695e4(self, 1);
    }
    {
        int n = *(int *)(s + 0x118);
        *(int *)(s + 0x118) = diff(n, n);
    }
    return self;
}

}
