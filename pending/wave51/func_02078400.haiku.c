#include "ffc/types.h"

extern int32_t func_020783a4(void *p);
extern void *func_020783d0(void *p);

typedef struct Obj {
    void *base;
    int32_t (*read)(int32_t *out);
} Obj;

int32_t func_02078400(Obj *p, int32_t r6, int32_t r2, int32_t *r3)
{
    int32_t val;
    int32_t (*rd)(int32_t *);
    int32_t c;
    int32_t sum = 0;

    rd = p->read;
    val = r2;
    c = rd(&val);
    while (c != 0) {
        if (c == 10) {
            break;
        }
        {
            int32_t v = func_020783a4(p);
            if (v == 0xffff) {
                v = *(volatile uint16_t *)((uint8_t *)p->base + 2);
            }
        }
        sum += r6 + *(int8_t *)((uint8_t *)func_020783d0(p) + 2);
        c = rd(&val);
    }

    if (r3 != 0) {
        if (c == 10) {
            *r3 = val;
        } else {
            *r3 = 0;
        }
    }

    if (sum > 0) {
        sum -= r6;
    }
    return sum;
}
