/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_020696e8(const void *object);
extern void func_02069300(uint32_t x);
void func_ov011_021c596c(uint8_t *param_1);
}
struct L {
    void *p; uint8_t on;
    L(void *q, uint8_t f) : p(q), on(f) { if (on) func_0208763c(p); }
    ~L() { if (on) func_02087678(p); }
};
void func_ov011_021c596c(uint8_t *param_1)
{
    uint8_t *r4 = param_1 + 0x14;
    int r4v;
    {
        L l(r4 + 0x1c, r4[0x12]);
        r4v = (*(uint32_t *)(r4 + 0x14) == 0);
    }
    if (r4v) {
        uint32_t *o = (uint32_t *)func_020696e8(param_1);
        if ((o[1] & (o[1] ^ o[2])) & 2) {
            func_02069300(*(uint32_t *)(param_1 + 0xd4));
        }
    }
}
