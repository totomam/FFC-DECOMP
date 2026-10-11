#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_021419a4[];

uint32_t *func_0208a2a4(void) {
    uint32_t *g;
    uint32_t *r4;
    uint32_t r2;

    func_02088978();
    g = data_021419a4;
    r4 = (uint32_t *)g[0];
    if (r4 == 0) {
        func_0208898c();
        return 0;
    }
    r2 = r4[0];
    g[0] = r2;
    if (r2 == 0) {
        g[4] = 0;
    }
    func_0208898c();
    return r4;
}
