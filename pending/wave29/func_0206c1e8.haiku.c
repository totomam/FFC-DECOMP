#include "ffc/types.h"

extern uint32_t data_0213e178[];

uint32_t func_0206c1e8(uint8_t *p) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint16_t tmp[2];
    uint32_t flag = 0;
    tmp[0] = *ime;
    *ime = 0;
    if (tmp[0] != 0) {
        flag = 1;
    }
    if (*p) {
        uint32_t ret = *ime;
        *ime = flag;
        return ret;
    }
    *p = 1;
    data_0213e178[1]++;
    uint32_t ret2 = *ime;
    *ime = flag;
    return ret2;
}
