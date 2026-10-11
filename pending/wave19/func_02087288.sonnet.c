#include "ffc/types.h"
extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_021414f4[];
uint32_t func_02087288(void) {
    uint32_t r;
    func_02088978();
    { uint32_t *p=data_021414f4; uint32_t v=p[1]; if (v < (uint32_t)-1) { p[1]=v+1; r=v; } }
    func_0208898c();
    return r;
}
