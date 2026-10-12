#include "ffc/types.h"

extern uint8_t *func_ov006_021a0c18(void *a, uint32_t *o1, uint32_t *o2);
extern uint8_t *func_ov006_021a0c88(uint8_t **cur, uint8_t *end, uint32_t *type, uint32_t *val);

uint32_t func_ov006_021a0e58(void *a, uint32_t *out)
{
    uint32_t o1;
    uint32_t o2;
    uint32_t type;
    uint32_t val;
    uint32_t n;
    uint8_t *base;
    uint8_t *cur;
    uint8_t *p;
    uint16_t v6;
    uint16_t v7;
    uint32_t v4;
    int16_t x;

    base = func_ov006_021a0c18(a, &o1, &o2);
    v6 = 0;
    v7 = 0;
    v4 = 0;
    if (base == 0) {
        return 0;
    }
    if (o1 != 1) {
        return 0;
    }
    n = o2;
    cur = base + 8;
    p = func_ov006_021a0c88(&cur, base + n, &type, &val);
    while (p != 0) {
        switch (type) {
        case 1:
            x = *(int16_t *)p;
            v6 = (uint16_t)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
            break;
        case 2:
            x = *(int16_t *)p;
            v4 = (uint16_t)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
            break;
        case 5:
            x = *(int16_t *)p;
            v7 = (uint16_t)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
            break;
        }
        p = func_ov006_021a0c88(&cur, base + n, &type, &val);
    }
    if (v6 == 1 && v4 == 1) {
        if (v7 >= 1) {
            *out = 1;
        } else {
            *out = 0;
        }
        return 1;
    }
    return 0;
}
