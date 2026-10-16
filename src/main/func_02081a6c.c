#include "ffc/types.h"
extern void func_02084774(int32_t a);
extern int32_t func_02088978(void);
extern void func_0208898c(int32_t x);
extern int32_t data_020b2944[];
int32_t func_02081a6c(int32_t a) {
    int32_t old = data_020b2944[1];
    int32_t s;
    if (old != -1) func_02084774(old);
    s = func_02088978();
    data_020b2944[1] = a;
    func_0208898c(s);
    if ((uint32_t)old > 3) return -1;
    return old;
}
