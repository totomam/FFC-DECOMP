#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t x, uint32_t n);

typedef struct {
    uint32_t i;
    uint32_t j;
    uint8_t *buf;
    uint32_t n;
} RC4State;

void func_ov006_0219ec2c(RC4State *p, uint8_t *key, uint32_t keylen, uint32_t n)
{
    uint8_t *buf = p->buf;
    uint32_t i, j, k;
    uint8_t s, t;

    j = 0;
    p->j = j;
    p->i = j;
    p->n = n;

    i = 0;
    if (n != 0) {
        do {
            buf[i] = (uint8_t)i;
            i++;
        } while (i < n);
    }

    j = 0;
    k = 0;
    for (i = 0; i < n; i++) {
        s = buf[i];
        j = (uint32_t)(func_0209a978(s + (j + key[k]), p->n) >> 32);
        t = buf[j];
        buf[j] = s;
        buf[i] = t;
        k++;
        if (k >= keylen) {
            k = 0;
        }
    }
}
