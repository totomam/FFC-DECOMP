#include "ffc/types.h"

extern uint8_t *func_02088978(uint32_t a);
extern uint8_t *func_ov000_0214fa54(uint8_t *p);
extern void func_0208898c(uint8_t *p);

int func_ov000_0214fd34(uint32_t a) {
    uint8_t *p = func_02088978(a);
    uint8_t *q = func_ov000_0214fa54(p);
    int v;
    if (q == 0) {
        func_0208898c(p);
        return 0;
    }
    if (a) {
        v = 1;
        if (q[0x12dc] == 0) v = 0;
        q[0x12dc] = 1;
    } else {
        v = 1;
        if (q[0x12dc] == 0) v = 0;
        q[0x12dc] = 0;
    }
    func_0208898c(p);
    return v;
}
