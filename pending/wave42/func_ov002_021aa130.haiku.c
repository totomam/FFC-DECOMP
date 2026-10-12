#include "ffc/types.h"

extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);

uint32_t func_ov002_021aa130(const void *object)
{
    int32_t i;
    uint32_t zero;
    uint32_t one;
    uint32_t flag;

    i = 1;
    zero = 0;
    one = i;

    for (; i < 13; i++) {
        switch (i) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            flag = one;
            break;
        case 1:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            flag = zero;
            break;
        default:
            flag = 0;
            break;
        }
        if (flag != 0 && func_ov002_021aa11c(object, i) != 0) {
            return 1;
        }
    }
    return 0;
}
