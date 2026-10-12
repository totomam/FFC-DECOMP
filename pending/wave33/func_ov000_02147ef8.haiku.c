#include "ffc/types.h"

struct D {
    uint8_t f0;
    uint8_t f1;
    uint8_t pad[0x16];
    int (*f18)(void);
    uint8_t pad2[0x34];
    void *f50;
};

extern void func_ov000_02145ad0(void *p);
extern void func_020871d8(uint32_t ms);
extern uint64_t func_020882cc(void);
extern struct D data_ov000_0216bc60;

int func_ov000_02147ef8(void)
{
    struct D *d = &data_ov000_0216bc60;
    uint32_t t0;

    func_ov000_02145ad0(d->f50);
    func_020871d8(100);
    func_ov000_02145ad0(d->f50);
    t0 = (uint32_t)(func_020882cc() >> 16);

    while (d->f18() && (int32_t)((uint32_t)(func_020882cc() >> 16) - t0) < 0x17) {
        if (d->f1 != 0) {
            return 0;
        }
        func_020871d8(100);
    }
    return 1;
}
