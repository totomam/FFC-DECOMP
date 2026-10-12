#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087024(uint8_t *p);
extern void func_0208898c(uint32_t x);

uint32_t func_0207dcc8(uint8_t *p, uint32_t v) {
    uint32_t id;
    uint32_t c;
    if (v == 0x100) {
        id = func_02088978();
        c = *(uint32_t *)(p + 0xc);
        if (!(c & 8)) {
            do {
                func_02087024(p + 0x18);
            } while (!(*(uint32_t *)(p + 0xc) & 8));
        }
        func_0208898c(id);
        c = *(uint32_t *)(p + 0xc);
        c &= ~8;
        *(uint32_t *)(p + 0xc) = c;
        v = *(uint32_t *)(p + 0x14);
    }
    return v;
}
