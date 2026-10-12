#include "ffc/types.h"

extern uint32_t *data_0213e170;
extern void func_0206c040(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t *key);

typedef struct {
    uint32_t *mt;
} MTS;

MTS *func_0206bf5c(MTS *p, uint32_t x, uint32_t a, uint32_t b) {
    uint32_t *key = (uint32_t *)((uint8_t *)data_0213e170 + 0x14);
    uint32_t i, j, n;

    func_0206c040(p, 0x12bd6aa, a, b, key);

    i = 1;
    j = 0;
    for (n = 624; n != 0; n--) {
        uint32_t t = p->mt[i - 1];
        p->mt[i] = (p->mt[i] ^ ((t ^ (t >> 30)) * 0x19660d)) + key[j] + j;
        i++;
        if (i >= 624) {
            p->mt[0] = p->mt[623];
            i = 1;
        }
        j++;
        if (j >= 624) {
            j = 0;
        }
    }

    j = 623;
    do {
        uint32_t t = p->mt[i - 1];
        t ^= t >> 30;
        p->mt[i] = (p->mt[i] ^ (t * 0x5d588b65)) - i;
        i++;
        if (i >= 624) {
            p->mt[0] = p->mt[623];
            i = 1;
        }
    } while (--j != 0);

    p->mt[0] = 0x80000000;
    return p;
}
