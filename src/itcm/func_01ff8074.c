#include "ffc/types.h"

extern uint32_t data_02fe00b8;
extern uint32_t data_02fe00b0;
extern uint32_t data_02fe00b4;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_01ff86c0(void *p);

void func_01ff8074(void *p)
{
    func_0208763c(&data_02fe00b8);
    if (data_02fe00b0) {
        volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
        uint16_t v = *ime;
        *ime = 0;
        data_02fe00b4 = v;
    }
    func_01ff86c0(p);
    if (data_02fe00b0) {
        volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
        (void)*ime;
        *ime = (uint16_t)data_02fe00b4;
    }
    func_02087678(&data_02fe00b8);
}
