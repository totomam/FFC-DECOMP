#include "ffc/types.h"
extern int func_02088978(void);
extern void func_0208898c(int);
extern uint32_t data_021419a4[];
uint32_t func_0208a17c(void) {
    uint32_t r;
    int x = func_02088978();
    if (data_021419a4[2] == 0) r = data_021419a4[1];
    else r = data_021419a4[8];
    func_0208898c(x);
    return r;
}
