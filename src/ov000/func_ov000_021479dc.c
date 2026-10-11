#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02087024(uint32_t);

uint32_t func_ov000_021479dc(uint32_t *out, uint32_t *p) {
    uint32_t h = func_02088978();
    uint32_t v = p[0x50 / 4];
    if (v == 0) {
        do {
            p[1] = 3;
            func_02087024(0);
            v = p[0x50 / 4];
        } while (v == 0);
    }
    func_0208898c(h);
    *out = v;
    return p[0x4c / 4];
}
