#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x100];
    uint16_t a;
    uint16_t b;
} Blk;

int func_ov000_0214e0a4(uint8_t *p) {
    Blk *q = *(Blk **)(p + 0xa4);
    int r2 = *(int32_t *)((uint8_t *)q + 0xf8);
    int d = (int)q->a;
    d = (int)q->b - d;
    d -= 1;
    if (d < 0) {
        d += r2;
    }
    return d;
}
