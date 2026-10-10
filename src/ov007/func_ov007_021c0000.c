#include "ffc/types.h"

extern int32_t func_ov001_021734e4(int32_t a, void *b);
extern uint8_t data_ov007_021c8b9c[];

int32_t func_ov007_021c0000(int32_t a)
{
    if (func_ov001_021734e4(a, data_ov007_021c8b9c) == 1) {
        return 1;
    }
    return 0;
}
