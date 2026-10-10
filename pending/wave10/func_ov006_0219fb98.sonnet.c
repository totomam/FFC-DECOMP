#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern int32_t func_ov000_0214f804(void);
extern void func_0208898c(uint32_t p);
extern uint32_t data_ov006_021bb120[];

uint32_t func_ov006_0219fb98(void) {
    uint32_t p = func_02088978();
    if (data_ov006_021bb120[6] == 7) {
        if (func_ov000_0214f804() == 3) {
            data_ov006_021bb120[6] = 4;
            func_0208898c(p);
            return 1;
        }
    }
    func_0208898c(p);
    return 0;
}
