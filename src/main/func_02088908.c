#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc];
    int32_t a;
    int16_t b;
    int16_t c;
} S;

int32_t func_02088908(S *p, int32_t x, int32_t y) {
    int32_t dx = x - p->a;
    int32_t dy = y - p->b;
    if (dx < 0 || (dx == 0 && dy < 0)) {
        return 0;
    }
    if (dy < 0) {
        dy += 0x107;
    }
    if (dy <= p->c) {
        return 1;
    }
    return 2;
}
