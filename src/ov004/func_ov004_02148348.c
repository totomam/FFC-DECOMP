/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" void func_ov004_02148348(void *a);

struct Lock {
    void *p; int f;
    Lock(void *q, int ff) : p(q), f(ff) { if (f) func_0208763c(p); }
    ~Lock() { if (f) func_02087678(p); }
};

extern "C" void func_ov004_02148348(void *a)
{
    uint8_t *r5 = *(uint8_t **)((uint8_t *)a + 0x14);
    if (r5[0x8c] != 0) {
        uint8_t *s = r5 + 0x48;
        int ok;
        {
            Lock l(s + 0x1c, s[0x12]);
            ok = (*(uint32_t *)(s + 0x14) == 0);
        }
        if (ok) {
            uint32_t *w = (uint32_t *)((uint8_t *)a + 0xc);
            *w = (*w & 0xffffff00u) | 2u;
        }
    }
}
