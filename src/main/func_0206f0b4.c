#include "ffc/types.h"

extern uint8_t *data_0213e178;
extern void func_0208eae4(uint32_t a, uint32_t b);
extern void func_0206cb44(uint8_t *g);
extern uint32_t func_0206cb98(uint8_t *g);
extern uint32_t func_0208e2f0(uint32_t a, uint8_t *b, uint8_t *c);
extern uint16_t *func_0208e8ac(uint32_t a, uint8_t *b, uint32_t c);

void func_0206f0b4(uint8_t *p) {
    uint32_t r, old, i, n, k8;
    uint16_t mask;
    uint16_t *q;

    if (p[0x224]) {
        p[0x224] = 0;
        data_0213e178[0xf92] = 1;
        if (data_0213e178[0xf93]) {
            func_0208eae4(0, 0);
            if (*(uint16_t *)(data_0213e178 + 0xf90) == 1) {
                func_0206cb44(data_0213e178);
            }
        }
    }

    if (func_0206cb98(data_0213e178)) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
        return;
    }

    *(uint16_t *)(p + 0x1e) = *(uint16_t *)(data_0213e178 + 0xf90);
    r = func_0208e2f0(*(uint32_t *)(data_0213e178 + 0x2018), p + 0x1e, p + 0x20);
    if (r != 0) {
        if (r != 5) {
            func_0206cb44(data_0213e178);
        }
        return;
    }

    old = *(uint32_t *)(p + 0x220);
    *(uint32_t *)(p + 0x220) = old + 1;
    if (old < *(uint32_t *)(data_0213e178 + 0x3224)) {
        return;
    }
    if (!(*(uint16_t *)(p + 0x22) & 1)) {
        return;
    }
    q = func_0208e8ac(*(uint32_t *)(data_0213e178 + 0x2018), p + 0x20, 0);
    mask = *q;
    if (mask != (*(uint16_t *)(p + 0x22) & mask)) {
        return;
    }
    *(uint16_t *)(data_0213e178 + 0xf90) = mask;
    n = 0;
    k8 = 0xf8e;
    i = 0;
    while (i < *(uint32_t *)(data_0213e178 + 0x44)) {
        if ((uint16_t)(1u << i) & mask) {
            if (*(uint16_t *)(data_0213e178 + k8) == i) {
                *(uint32_t *)(data_0213e178 + 0x30a8) = n;
            }
            n++;
        }
        i++;
    }
    *(uint32_t *)(data_0213e178 + 0x30ac) = n;
    {
        uint8_t *s = *(uint8_t **)(data_0213e178 + 0x3220);
        s[7] = 1;
    }
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
}
