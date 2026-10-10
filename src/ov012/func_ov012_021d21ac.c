/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_0208763c(void *p);
void func_02087678(void *p);
void func_02056c4c(void *p);
void func_ov012_021d2198(void *p);
void func_ov012_021d21ac(uint8_t *p0);
}

struct G { uint8_t *p; uint8_t f; G(uint8_t *x, uint8_t y) : p(x), f(y) { if (f) func_0208763c(p); } ~G() { if (f) func_02087678(p); } };

void func_ov012_021d21ac(uint8_t *p0)
{
    uint8_t *r5 = p0 + 0x14;
    int r5v;
    {
        G g(r5 + 0x1c, r5[0x12]);
        r5v = (*(uint32_t *)(r5 + 0x14) == 0);
    }
    if (!r5v) {
        func_02056c4c(p0 + 0x14);
    }
    func_ov012_021d2198(p0);
}
