#include "ffc/types.h"

extern uint32_t func_02035eb8(const void *object);
extern uint32_t func_02035ed8(const void *object);

uint32_t func_02035ef8(const void *object)
{
    switch (func_02035eb8(object)) {
    case 3:
        return 0;
    case 4:
        switch (func_02035ed8(object)) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        default:
            break;
        }
        break;
    default:
        break;
    }
    return 0;
}
