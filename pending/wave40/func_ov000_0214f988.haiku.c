#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint8_t *data_ov000_0216e214[];

uint32_t func_ov000_0214f988(uint32_t a)
{
    uint32_t r4;
    uint32_t old;
    uint32_t off;
    uint8_t *base;
    uint32_t flags;

    flags = a;
    func_02088978();
    off = 0x12d4;
    base = data_ov000_0216e214[1];
    old = *(uint32_t *)(base + off);
    r4 = 0;
    if (base == 0) {
        func_0208898c();
        return 0;
    }
    if (flags & 0x8000) {
        r4 |= 0x3ffe;
        if (!(flags & 0x3ffe)) {
            flags |= 0xa082;
        }
    }
    if (flags & 0x20000) {
        r4 |= 0x10000;
    }
    if (flags & 0x80000) {
        r4 |= 0x40000;
    }
    if (flags & 0x200000) {
        r4 |= 0x100000;
    }
    if (flags & 0x800000) {
        r4 |= 0x400000;
    }
    *(uint32_t *)(base + off) = (old & ~r4) | flags;
    func_0208898c();
    return old;
}
