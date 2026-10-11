#include "ffc/types.h"

typedef struct Sub {
    uint8_t pad[0x38];
    uint8_t flag;
} Sub;

typedef struct G {
    uint32_t a;
    uint32_t count;
    Sub *sub;
} G;

extern G data_0213e054;

void func_02054218(void) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint32_t tmp;
    uint32_t r = 0;
    uint16_t v = *ime;
    *ime = 0;
    if (v != 0) {
        r = 1;
    }
    data_0213e054.count++;
    if (data_0213e054.count == 1) {
        data_0213e054.sub->flag = 1;
    }
    tmp = *ime;
    *ime = r;
}
