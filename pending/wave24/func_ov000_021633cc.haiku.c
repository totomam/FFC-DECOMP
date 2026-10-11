#include "ffc/types.h"

extern int32_t func_ov000_02163408(void);
extern uint8_t *func_ov000_02163634(int32_t idx);
extern void func_ov000_02164400(uint8_t v);

void func_ov000_021633cc(void)
{
    int32_t i = 0;
    if (func_ov000_02163408() > 0) {
        do {
            uint8_t *p = func_ov000_02163634(i);
            func_ov000_02164400(p[0x16]);
            i++;
        } while (i < func_ov000_02163408());
    }
}
