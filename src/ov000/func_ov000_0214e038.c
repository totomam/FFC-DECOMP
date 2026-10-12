#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t t);
extern int32_t func_ov000_0214e0a4(void *self);
extern void func_02087024(void *p);

int32_t func_ov000_0214e038(void *self, int32_t a, int32_t b, uint32_t *out, uint32_t flag)
{
    uint8_t *q;
    int32_t lim;
    int32_t val;
    uint32_t t;

    q = *(uint8_t **)((uint8_t *)self + 0xa4);
    lim = b;
    if (b > a) {
        lim = a;
    }
    t = func_02088978();
    for (;;) {
        val = func_ov000_0214e0a4(self);
        if (val >= lim) {
            if (val >= a) {
                val = a;
            }
            *out = *(uint16_t *)(q + 0x100);
            break;
        }
        if ((flag & 1) == 0) {
            val = 0;
            break;
        }
        func_02087024(q + 0x104);
    }
    func_0208898c(t);
    return val;
}
