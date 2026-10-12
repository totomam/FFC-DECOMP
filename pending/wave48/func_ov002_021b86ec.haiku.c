#include "ffc/types.h"

extern void func_02069600(void *a, void *b);
extern void func_ov002_021b947c(void *a);
extern void *func_020487a0(void *container, void *position);
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
        if (w[0x38] & (1u << j)) {
            slot = w + j;
            if (slot[0x3e]) {
                q = (uint32_t *)w[0x48];
                end = q + w[0x49];
                while (q != end) {
                    if ((uint32_t *)*q == (uint32_t *)slot[0x3e]) {
                        t = 0;
                        func_020487a0(&w[0x48], *(uint32_t *)&t);
                        break;
                    }
                    q++;
                }
                func_02069600(a, (void *)slot[0x3e]);
                p = (uint32_t *)slot[0x3e];
                if (p) {
                    ((void (*)(void *))((uint32_t *)p[0])[1])(p);
                    slot[0x3e] = 0;
                }
            }
        }
    }

    func_ov002_021b9514(a);
}
