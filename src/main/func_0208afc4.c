#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_0208898c(uint32_t state);
extern int func_0208b18c(uint32_t state);
extern uint32_t data_02143520[];

int func_0208afc4(uint32_t a, uint32_t b) {
    uint32_t st = func_02088978();
    if (data_02143520[1] != 0) {
        func_0208898c(st);
        return 1;
    }
    data_02143520[1] = 1;
    st = func_0208898c(st);
    data_02143520[2] = a;
    data_02143520[3] = b;
    if (func_0208b18c(st) != 0) {
        return 0;
    }
    data_02143520[1] = 0;
    return 3;
}
