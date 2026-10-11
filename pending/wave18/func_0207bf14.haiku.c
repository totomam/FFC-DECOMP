#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02077aa4(void *p, uint32_t v);
extern void func_0208898c(uint32_t v);
extern uint32_t data_0213ecdc;

uint32_t func_0207bf14(uint32_t a)
{
    uint32_t r = func_02088978();
    func_02077aa4(&data_0213ecdc, a);
    func_0208898c(r);
}
