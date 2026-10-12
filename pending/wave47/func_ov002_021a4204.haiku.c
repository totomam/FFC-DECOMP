#include "ffc/types.h"

extern void *func_ov002_021aac10(void *object);
extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_ov002_021aa780(const void *object);

uint32_t func_ov002_021a4204(void *unused, void *obj, uint32_t n)
{
    uint32_t v;
    int flag;

    if (func_ov002_021aa11c(func_ov002_021aac10(obj), 6) != 0) {
        return 0;
    }

    v = func_ov002_021aa780(obj);
    if (v != 0 && v - 3 > 1) {
        flag = 0;
    } else {
        flag = 1;
    }
    if (!flag) {
        return 0;
    }

    switch (n) {
    case 1:
    case 4:
    case 5:
    case 6:
    case 8:
        return 1;
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
        break;
    default:
        return 0;
    }
    return 0;
}
