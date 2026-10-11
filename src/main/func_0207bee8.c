#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_02077b70(void *p, uint32_t flag);
extern void func_02077b34(void *p, uint32_t v);
extern void func_0208898c(uint32_t v);
extern uint8_t data_0213ecdc[];

uint32_t func_0207bee8(void)
{
    uint32_t r4 = func_02088978();
    uint32_t r5 = func_02077b70(data_0213ecdc, 0);
    if (r5 != 0) {
        func_02077b34(data_0213ecdc, r5);
    }
    func_0208898c(r4);
    return r5;
}
