#include "ffc/types.h"

extern void func_02088f30(void);
extern uint32_t func_02088978(void);
extern uint64_t func_020882cc(void);
extern void func_020883ec(uint32_t *p, uint64_t v);
extern void func_0208898c(uint32_t v);

void func_020884b4(uint32_t *p, uint64_t a, uint32_t vt, uint32_t f4)
{
    uint32_t r;

    if (p == 0 || p[0] != 0) {
        func_02088f30();
    }
    r = func_02088978();
    p[7] = 0;
    p[8] = 0;
    p[0] = vt;
    p[1] = f4;
    func_020883ec(p, a + func_020882cc());
    func_0208898c(r);
}
