/* cflags: -O0 */
#include "ffc/types.h"
extern uint32_t func_02088978(void);
extern uint32_t func_ov000_0214f600(uint32_t a, uint32_t b, uint32_t c);
extern void func_0208898c(uint32_t a);
extern struct { uint32_t pad[6]; uint32_t st; } data_ov006_021bb120;
uint32_t func_ov006_0219fb5c(void) {
    uint32_t r = func_02088978();
    if (data_ov006_021bb120.st == 5 && func_ov000_0214f600(0, 0, 0) == 3) {
        data_ov006_021bb120.st = 4;
        func_0208898c(r);
        return 1;
    }
    func_0208898c(r);
    return 0;
}
