#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_021414f4[];

uint32_t func_02087288(void) {
    uint32_t *p;
    uint32_t v;
    uint32_t r;
    func_02088978();
    p = data_021414f4;
    v = p[1];
    if (v < 0xFFFFFFFFu) {
        p[1] = v + 1;
        r = v;
    }
    func_0208898c();
    return r;
}
