#include "ffc/types.h"

extern void func_02092878(void *p);
extern uint8_t data_ov007_021c9c3c[];

uint32_t func_ov007_021c026c(void *a, void *b)
{
    if (a == 0 || b == 0) {
        return 0;
    }
    func_02092878(data_ov007_021c9c3c);
    return 1;
}
