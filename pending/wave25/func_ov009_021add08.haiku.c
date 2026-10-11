#include "ffc/types.h"

extern uint8_t func_02036360(const void *object);
extern uint32_t func_020363b4(const void *object);

int func_ov009_021add08(void *unused, const void *a, const void *b)
{
    if (func_02036360(a) != func_02036360(b)) {
        return 0;
    }
    if (func_020363b4(a) != func_020363b4(b)) {
        return 0;
    }
    return 1;
}
