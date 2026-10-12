#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_ov000_0214fbe4(uint32_t);

struct Glob {
    uint32_t x;
    uint8_t *p;
};
extern struct Glob data_ov000_0216e214;

uint32_t func_ov000_0214f67c(void) {
    uint32_t v = func_02088978();
    struct Glob *g = &data_ov000_0216e214;
    uint8_t *p = g->p;

    if (p == 0) {
        func_0208898c(v);
        return 1;
    }
    switch (p[0x12de]) {
    case 6:
        func_ov000_0214fbe4(7);
        *(uint16_t *)(g->p + 0x12da) = 4;
        break;
    case 7:
        func_0208898c(v);
        return 2;
    case 3:
        func_0208898c(v);
        return 0;
    default:
        func_0208898c(v);
        return 1;
    }
    func_0208898c(v);
    return 3;
}
