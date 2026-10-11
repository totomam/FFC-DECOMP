#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_02159000(void);
extern int func_ov001_02186830(uint32_t, uint32_t);
extern uint32_t func_ov001_02185e8c(int, uint32_t, uint32_t);

uint32_t func_ov000_0215c188(uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *p;
    int x;

    if (func_ov000_02163350() == 0 || func_ov000_02159000() != 0) {
        return c;
    }
    p = func_ov000_02163350();
    x = func_ov001_02186830(*(uint32_t *)(p + 0x5e0), a);
    if (x != 0) {
        return func_ov001_02185e8c(x, b, c);
    }
    return c;
}
