#include "ffc/types.h"

extern void func_02069600(void *a, void *b);
extern void func_ov002_021b947c(void *a);
typedef struct { uint8_t x; } It; typedef struct { uint8_t x; uint8_t y; uint8_t z;uint8_t w; } It4;
extern void *func_020487a0(void *container, void *position, uint8_t t);
extern void func_ov002_021b9514(void *a);

void func_ov002_021b86ec(uint8_t *a, uint32_t *s, uint32_t v)
{
    uint32_t *w = (uint32_t *)a;
    uint32_t i;
    int j;
    uint32_t *p;
    uint32_t *q;
    uint32_t *end;
    uint32_t *slot;
    uint8_t t;

    w[0x47] = s[4];
    w[0x30] = s[5];
    w[0x37] = s[7];
    w[0x38] = s[6];
    w[0x39] = s[8];
    w[0x3a] = s[9];
    w[0x4b] = v;

    for (i = 0; i < 3; i++) {
        p = (uint32_t *)w[0x44 + i];
        if (p) {
            func_02069600(a, p);
        }
        p = (uint32_t *)w[0x44 + i];
        if (p) {
            if (p) {
                ((void (*)(void *))((uint32_t *)p[0])[1])(p);
            }
            w[0x44 + i] = 0;
        }
    }

    func_ov002_021b947c(a);

    for (j = 0; j < 6; j++) {
        uint32_t val;
        if (!(w[0x38] & (1u << j))) continue;
        val = w[0x3e + j];
        if (!val) continue;
        q = (uint32_t *)w[0x48];
        end = q + w[0x49];
        for (; q != end; q++) {
            if (*q == val) {
                uint8_t t;
                t = 0;
                func_020487a0(&w[0x48], q, t);
                break;
            }
        }
        func_02069600(a, (void *)w[0x3e + j]);
        p = (uint32_t *)w[0x3e + j];
        if (p) {
            ((void (*)(void *))((uint32_t *)p[0])[1])(p);
            w[0x3e + j] = 0;
        }
    }

    func_ov002_021b9514(a);
}
