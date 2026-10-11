#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_ov000_0214fa54(void);
extern void func_0208898c(uint32_t);
extern uint32_t func_ov000_0214ff30(uint32_t);

uint32_t func_ov000_0214fd8c(uint32_t a) {
    uint32_t p = func_02088978();
    uint32_t q;
    if (func_ov000_0214fa54() == 0) {
        func_0208898c(p);
        return 0;
    }
    q = func_ov000_0214ff30(a);
    if (q == 0) {
        func_0208898c(p);
        return 0;
    }
    func_0208898c(p);
    return q + 0x10;
}
