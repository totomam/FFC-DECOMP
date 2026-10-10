#include "ffc/types.h"

extern uint8_t func_ov002_021aab40(const void *object);

int func_ov002_021c86fc(void *unused, const void *object)
{
    if (func_ov002_021aab40(object) == 0x14) {
        return 1;
    }
    return 0;
}
