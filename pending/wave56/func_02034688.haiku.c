#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x2c];
    uint8_t *tab;
    int32_t result;
    uint32_t flag;
} S;

void func_02034688(S *p) {
    uint8_t m[2];
    uint8_t *q;
    uint32_t k;
    uint32_t lim;
    uint32_t i;

    if (p->flag != 0) {
        p->result = 0;
        return;
    }
    k = 1;
    k = k << 8;
    lim = k << 2;
    m[1] = 0;
    i = 0;
    do {
        m[0] = p->tab[i];
        if (m[0] < 0x80) {
            m[0] = (uint8_t)(k - p->tab[i]);
        }
        q = (m[0] < m[1]) ? &m[1] : &m[0];
        m[1] = *q;
        i = i + 1;
    } while (i < lim);
    if (m[1] >= 0xc6) {
        p->result = 4;
    } else if (m[1] >= 0xb1) {
        p->result = 3;
    } else if (m[1] >= 0xa3) {
        p->result = 2;
    } else if (m[1] >= 0x97) {
        p->result = 1;
    } else {
        p->result = 0;
    }
}
