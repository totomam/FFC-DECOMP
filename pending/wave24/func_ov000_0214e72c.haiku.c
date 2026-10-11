#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_ov000_0214e600(void);
extern void func_0208898c(uint32_t v);
extern uint32_t data_ov000_0216e084;

void func_ov000_0214e72c(void) {
    uint32_t *p;
    uint32_t v;
    v = func_02088978();
    p = &data_ov000_0216e084;
    while (*p != 0) {
        func_ov000_0214e600();
    }
    func_0208898c(v);
}
