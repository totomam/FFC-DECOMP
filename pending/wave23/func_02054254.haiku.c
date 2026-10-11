#include "ffc/types.h"

typedef struct {
    uint32_t a;
    int32_t count;
    uint8_t *base;
} Data;

extern Data data_0213e054;

uint16_t func_02054254(void) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint32_t prev = 0;
    uint16_t old = *ime;
    volatile uint32_t pad;
    *ime = 0;
    if (old != 0) {
        prev = 1;
    }
    data_0213e054.count--;
    if (data_0213e054.count == 0) {
        uint8_t *p = data_0213e054.base + 0x38;
        *p = 0;
    }
    old = *ime;
    *ime = prev;
    pad = old;
}
