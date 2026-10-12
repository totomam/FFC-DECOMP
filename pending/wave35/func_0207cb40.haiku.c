#include "ffc/types.h"

extern uint32_t func_02088978(uint32_t, uint32_t);
extern void func_02088f30(uint32_t);
extern void func_02087024(uint32_t *);
extern void func_0208898c(uint32_t);
extern uint32_t data_021407c0[];

void func_0207cb40(uint32_t a, uint32_t b) {
    uint32_t *p = data_021407c0;
    uint32_t t = func_02088978(a, b);
    if (p[5] == a) {
        if (p[9] != b) {
            func_02088f30(b);
        }
    } else {
        while (p[5] != (uint32_t)-3) {
            func_02087024(p + 7);
        }
        p[5] = a;
        p[9] = b;
    }
    p[6]++;
    func_0208898c(t);
}
