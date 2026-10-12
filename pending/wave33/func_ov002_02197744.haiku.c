#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aa9d8(void);
extern uint32_t func_ov002_021ab064(const void *object, uint32_t arg);
extern uint32_t func_ov002_021aa780(const void *object);

uint32_t func_ov002_02197744(uint32_t unused, const void *object)
{
    uint32_t result = 0;
    uint32_t i;

    for (i = 0; i < func_ov002_021a18bc(object); i++) {
        const void *entry = (const void *)func_ov002_021a18c4(object, i);
        if (func_ov002_021aa9d8() == 0) {
            if (func_ov002_021ab064(entry, 0) != 0) {
                result |= (uint32_t)1 << func_ov002_021aa780(entry);
            }
        }
    }
    return result;
}
