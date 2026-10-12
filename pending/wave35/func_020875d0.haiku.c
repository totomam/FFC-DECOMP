#include "ffc/types.h"

extern uint32_t func_02088978(void *p);
extern void func_0208898c(uint32_t h);
extern void func_02087024(void *p);

uint32_t func_020875d0(uint8_t *p, uint32_t *out, uint32_t flag) {
    uint32_t h = func_02088978(p);
    if (*(uint32_t *)(p + 0x1c) == 0) {
        uint32_t f = flag & 1;
        uint8_t *q = p + 8;
        do {
            if (f == 0) {
                func_0208898c(h);
                return 0;
            }
            func_02087024(q);
        } while (*(uint32_t *)(p + 0x1c) == 0);
    }
    if (out != 0) {
        *out = ((uint32_t *)*(uint32_t *)(p + 0x10))[*(uint32_t *)(p + 0x18)];
    }
    func_0208898c(h);
    return 1;
}
