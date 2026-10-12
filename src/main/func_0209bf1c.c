#include "ffc/types.h"

extern uint8_t func_0209bf14(void);

uint32_t func_0209bf1c(uint32_t unused, uint8_t *buf, uint32_t *p)
{
    uint32_t n = *p;
    uint32_t i = 0;
    while (i < n) {
        buf[i] = func_0209bf14();
        if (buf[i] == 0xd || buf[i] == 0xa) {
            *p = i + 1;
            break;
        }
        i++;
    }
    return 0;
}
