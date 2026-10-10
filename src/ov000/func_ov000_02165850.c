#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint8_t data_ov000_0216b494[];

uint32_t func_ov000_02165850(void *object, uint32_t second, uint32_t third) {
    return func_02086ad4(object, (uint32_t)data_ov000_0216b494, second, third);
}
