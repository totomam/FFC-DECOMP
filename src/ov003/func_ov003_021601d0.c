/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" void func_02056c4c(void *p);
extern "C" void func_ov003_021600cc(void *a, int b, int c, int d);
extern "C" void func_ov003_021601d0(uint8_t *a);

struct Guard {
    int f; void *p;
    Guard(uint8_t *s) : f(s[0x12]), p(s + 0x1c) { if (f) func_0208763c(p); }
    ~Guard() { if (f) func_02087678(p); }
};

void func_ov003_021601d0(uint8_t *a)
{
    uint8_t *s = *(uint8_t **)(a + 0xd4);
    int r5;
    {
        Guard g(s);
        r5 = (*(int32_t *)(s + 0x14) == 0);
    }
    if (r5 != 0) {
        return;
    }
    func_02056c4c(*(void **)(a + 0xd4));
    {
        uint8_t *q = *(uint8_t **)(*(uint8_t **)(a + 0x80) + 0x180);
        if (*(int32_t *)(q + 0xdc) == 1) {
            return;
        }
    }
    func_ov003_021600cc(a, 0, 1, 0);
}
