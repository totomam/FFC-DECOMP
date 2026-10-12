#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint16_t cnt;
    uint16_t off;
} Hdr;

void func_02077b34(Hdr *h, uint8_t *base) {
    uint32_t off = h->off;
    uint32_t *n = (uint32_t *)(base + off);

    if (n[0] == 0) {
        h->a = n[1];
    } else {
        *(uint32_t *)(n[0] + off + 4) = n[1];
    }

    if (n[1] == 0) {
        h->b = n[0];
    } else {
        *(uint32_t *)(n[1] + h->off) = n[0];
    }

    n[0] = 0;
    n[1] = 0;
    h->cnt = h->cnt - 1;
}
