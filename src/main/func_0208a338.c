#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
} Entry;

extern Entry data_02143480[];

uint8_t func_0208a338(uint32_t idx, uint32_t x, uint32_t y) {
    Entry *e = &data_02143480[idx];
    e->a = x;
    e->b = y;
    e->c++;
    return e->c;
}
