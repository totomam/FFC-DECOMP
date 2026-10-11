#include "ffc/types.h"

extern void func_ov001_0217b158(void);
extern void *func_ov000_021686f4(uint32_t a, uint32_t b, void (*cb)(void));
extern void func_ov001_0217ef6c(void *obj, void *data);
extern uint8_t data_ov001_02190e5c[];

uint32_t func_ov001_0217b170(void *param)
{
    uint8_t *r4 = *(uint8_t **)param;
    uint32_t r;

    r = (uint32_t)func_ov000_021686f4(8, 1, func_ov001_0217b158);
    *(uint32_t *)(r4 + 0x3b4) = r;
    if (r == 0) {
        func_ov001_0217ef6c(param, data_ov001_02190e5c);
        return 1;
    }
    return 0;
}
