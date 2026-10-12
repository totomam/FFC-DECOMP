/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
void func_0208763c(void *p);
void func_02087678(void *p);
void func_02056c4c(void *p);
}
struct Lock {
    void *q; int f;
    Lock(void *s, int fl) : q(s), f(fl) { if (f) func_0208763c(q); }
    ~Lock() { if (f) func_02087678(q); }
};
extern "C" void func_ov009_0219a8f4(uint8_t *p)
{
    uint8_t *s = *(uint8_t **)(p + 0x80);
    int ok;
    {
        Lock l(s + 0x1c, s[0x12]);
        ok = (*(uint32_t *)(s + 0x14)) == 0;
    }
    if (ok == 0) {
        uint8_t *r = p + 0x88;
        r[0] = 0; r[1] = 0; r[2] = 0; r[3] = 0; r[4] = 0; r[5] = 0;
        r[6] = 0; r[7] = 0; r[8] = 0; r[9] = 0; r[10] = 0; r[11] = 0;
        func_02056c4c(*(void **)(p + 0x80));
    }
}
