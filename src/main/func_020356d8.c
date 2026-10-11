#include "ffc/types.h"

extern uint32_t func_0201a3a0(void *object, const void *third);
extern uint8_t data_020ae60c[];
extern uint32_t data_020ae5b8[];

void func_020356d8(uint32_t idx, void *obj)
{
    func_0201a3a0(obj, data_020ae60c);
    func_0201a3a0(obj, (const void *)data_020ae5b8[idx]);
}
