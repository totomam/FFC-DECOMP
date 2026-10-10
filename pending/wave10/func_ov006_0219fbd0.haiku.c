#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern int32_t func_ov000_0214f588(void);
extern void func_0208898c(uint32_t);
extern int32_t func_ov006_0219f9c0(void);

typedef struct {
    uint8_t pad[0x18];
    int32_t state;
} S;

extern S data_ov006_021bb120;

int32_t func_ov006_0219fbd0(void) {
    uint32_t r4 = func_02088978();
    if (data_ov006_021bb120.state == 3) {
        if (func_ov000_0214f588() == 3) {
            data_ov006_021bb120.state = 2;
            func_0208898c(r4);
            return 1;
        }
        func_0208898c(r4);
        return 0;
    }
    if (func_ov006_0219f9c0() == 1) {
        data_ov006_021bb120.state = 2;
        func_0208898c(r4);
        return 1;
    }
    func_0208898c(r4);
    return 0;
}
