#include "ffc/types.h"

typedef struct {
    uint8_t *p;
    uint32_t cnt;
} S020543B8;

extern S020543B8 data_0213e060;

void func_020543b8(void) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t r0 = 0;
    uint16_t old;

    old = *ime;
    *ime = 0;
    if (old != 0) {
        r0 = 1;
    }
    data_0213e060.cnt--;
    if (data_0213e060.cnt == 0) {
        data_0213e060.p[9] = 0;
    }
    old = *ime;
    *ime = r0;
}
