#include "ffc/types.h"

extern uint32_t data_02fe00ac;
extern uint32_t data_02fe00a4;
extern uint32_t data_02fe00a8;
extern uint32_t data_02fe00a0;
extern uint32_t data_02fe00b0;
extern uint32_t data_02fe00b4;
extern uint32_t data_02fe00b8;
extern void func_02087620(void *object);

void func_0204e594(uint32_t a, uint32_t b) {
    data_02fe00ac = a;
    data_02fe00a4 = a;
    data_02fe00a8 = b;
    data_02fe00a0 = b - a;
    data_02fe00b0 = 0;
    data_02fe00b4 = 0;
    func_02087620((void *)&data_02fe00b8);
}
