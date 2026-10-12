/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_0208763c(void *p);
void func_02087678(void *p);
uint32_t *func_020696e8(const void *object);
void func_02069300(uint32_t v);
int func_020692e8(uint32_t v);
void func_020692f0(uint32_t v);
int func_020692e0(uint32_t v);
void func_ov007_021aa448(void *p0);
}

struct Guard {
    void *p; uint8_t f;
    Guard(void *q, uint8_t ff) : p(q), f(ff) { if (f) func_0208763c(p); }
    ~Guard() { if (f) func_02087678(p); }
};

void func_ov007_021aa448(void *p0)
{
    uint8_t *a = (uint8_t *)p0;
    uint8_t *sub = a + 0x14;
    int ok;
    {
        Guard g(sub + 0x1c, sub[0x12]);
        ok = (*(uint32_t *)(sub + 0x14) == 0);
    }
    if (!ok) return;

    uint32_t *o = func_020696e8(a);
    if ((o[1] & (o[2] ^ o[1])) & 2) {
        if (a[0x134]) {
            func_02069300(*(uint32_t *)(a + 0xc4));
        } else {
            uint32_t v = *(uint32_t *)(a + 0xbc);
            if (func_020692e8(v)) func_02069300(v);
            else func_020692f0(v);
        }
        return;
    }
    o = func_020696e8(a);
    if ((o[1] & (o[2] ^ o[1])) & 8) {
        if (func_020692e0(*(uint32_t *)(a + 0xc0))) {
            uint32_t w = *(uint32_t *)(a + 0xc0);
            if (func_020692e8(w)) func_02069300(w);
            else func_020692f0(w);
        }
    }
}
