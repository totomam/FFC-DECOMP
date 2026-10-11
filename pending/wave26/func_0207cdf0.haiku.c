#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087058(void *p, uint32_t v);
extern void func_0208898c(uint32_t v);

void func_0207cdf0(uint8_t *p)
{
    void (*r4)(uint32_t);
    uint32_t r7;
    uint32_t s;
    uint32_t v;

    r4 = *(void (**)(uint32_t))(p + 0x4ec);
    r7 = *(uint32_t *)(p + 0x4f0);
    s = func_02088978();
    v = *(uint32_t *)(p + 4);
    v &= ~0x4cU;
    *(uint32_t *)(p + 4) = v;
    func_02087058(p + 0x4f4, v);
    func_0208898c(s);
    if (r4 != 0) {
        r4(r7);
    }
}
