#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x18];
    int32_t state;
} Ov006Data;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern int32_t func_ov000_0214f600(uint32_t, uint32_t, uint32_t);
extern Ov006Data data_ov006_021bb120;

int32_t func_ov006_0219fb5c(void)
{
    uint32_t r4 = func_02088978();

    if (data_ov006_021bb120.state == 5) {
        if (func_ov000_0214f600(0, 0, 0) == 3) {
            data_ov006_021bb120.state = 4;
            func_0208898c(r4);
            return 1;
        }
    }
    func_0208898c(r4);
    return 0;
}
