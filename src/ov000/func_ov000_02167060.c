#include "ffc/types.h"

extern uint8_t *func_ov000_02166414(void);
extern void func_ov000_021652a8(int a, int b, int c, const void *d);
extern int func_ov000_02168768(void *p);
extern uint8_t data_ov000_0216b7fc[];

int func_ov000_02167060(void)
{
    uint8_t *p = func_ov000_02166414();
    if (*(uint32_t *)(p + 0xc) == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 1;
    }
    if (func_ov000_02168768(*(void **)(p + 8)) == 0) {
        return 1;
    }
    return 0;
}
