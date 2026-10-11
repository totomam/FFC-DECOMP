#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void *func_02077b70(void *a, uint32_t b);
extern void func_02077b34(void *a, void *b);
extern void func_0208898c(uint32_t s);

void *func_0207beb4(void *p) {
    uint32_t s = func_02088978();
    void *r = func_02077b70(p, 0);
    if (r != 0) {
        func_02077b34(p, r);
        uint32_t *q = *(uint32_t **)((uint8_t *)r + 8);
        q[0x49] -= 1;
    }
    func_0208898c(s);
    return r;
}
