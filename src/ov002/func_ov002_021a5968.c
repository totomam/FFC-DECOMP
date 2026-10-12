#include "ffc/types.h"

extern int32_t func_ov002_021aac18(uint32_t first, uint32_t second);
extern uint32_t func_ov002_021a1acc(uint32_t p);
extern int32_t func_0206c184(uint32_t first, uint32_t second);

int32_t func_ov002_021a5968(uint32_t a, uint32_t b, uint32_t c, int32_t d)
{
    int32_t flag;

    if (b == 0) {
        return 1;
    }
    if (c == 1) {
        return 1;
    }
    switch (c) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        flag = 1;
        break;
    case 1:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        flag = 0;
        break;
    default:
        flag = 0;
        break;
    }
    if (flag) {
        if (func_ov002_021aac18(b, c) != 0) {
            return 2;
        }
    }
    {
        int32_t r = func_0206c184(func_ov002_021a1acc(a), 100);
        if (r >= d) {
            return 1;
        }
        return 0;
    }
}
