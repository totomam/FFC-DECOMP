#include "ffc/types.h"

typedef struct {
    uint32_t lo : 24;
    uint32_t hi : 8;
} W;

uint32_t func_0207eb94(uint32_t *p) {
    W *w = (W *)&p[7];
    if (w->hi & 1) {
        return w->lo;
    }
    return p[2];
}
