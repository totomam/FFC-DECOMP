#include "ffc/types.h"
typedef struct { uint8_t pad[9]; uint8_t f; } In;
typedef struct { In *p; int cnt; } S;
extern S data_0213e060;
uint32_t func_02054380(void) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint32_t old = *ime;
    uint32_t r = 0;
    *ime = 0;
    if (old != 0) r = 1;
    data_0213e060.cnt++;
    if (data_0213e060.cnt == 1) data_0213e060.p->f = 1;
    {
        volatile uint16_t *i2 = (volatile uint16_t *)0x4000208;
        uint16_t t = *i2;
        *i2 = r;
    }
    return r;
}
