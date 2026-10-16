#include "ffc/types.h"
extern uint32_t func_02088978(void);
extern uint32_t func_ov000_0214f804(void);
extern void func_0208898c(uint32_t);
extern uint32_t data_ov006_021bb120[];
int func_ov006_0219fb98(void)
{
    uint32_t s = func_02088978();
    if (data_ov006_021bb120[6] == 7 && func_ov000_0214f804() == 3) {
        data_ov006_021bb120[6] = 4;
        func_0208898c(s);
        return 1;
    }
    func_0208898c(s);
    return 0;
}
