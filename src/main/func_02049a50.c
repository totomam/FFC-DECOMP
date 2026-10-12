#include "ffc/types.h"

extern uint32_t func_02054200(void);
extern uint32_t data_020b0050[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_02049a50(uint8_t *p)
{
    uint32_t r, r1, n;
    Pair t;

    n = 0;
    *(uint32_t *)(p + 0xa0) = 0;
    *(p + 0x9d) = 0;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0xa4) = 0;

    r = func_02054200();
    if (r == 1) {
        r1 = 0xb;
    } else if (r & 0x02000000) {
        r1 = 0xc;
    } else if (r == 2) {
        r1 = 7;
    } else if (r == 3) {
        r1 = 8;
    } else if (r < 5) {
        goto copy;
    } else {
        if (r & 0x01000000) {
            n = 1;
        }
        *(p + 0x9d) = n;
        r &= 0xfeffffff;
        r1 = r - 5;
        *(uint32_t *)(p + 0xa4) = r1;
        if (r1 != 0) {
            r1 = 0xe;
        } else {
            r1 = 0xd;
        }
    }
    *(uint32_t *)(p + 0xa0) = r1;

copy:
    t = *(Pair *)data_020b0050;
    *(Pair *)(p + 0x80) = t;
}
