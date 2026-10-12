#include "ffc/types.h"

extern int32_t func_020783a4(void *p);
extern void *func_020783d0(void *p, int32_t v);

typedef struct Obj {
    uint16_t *base;
    int32_t (*read)(int32_t *out);
} Obj;

int32_t func_02078400(Obj *p, int32_t w, int32_t r2, int32_t *r3)
{
    int32_t val;
    int32_t c;
    int32_t sum;

    int32_t (*rd)(int32_t *);
    rd = p->read;
    sum = 0;
    val = r2;
    while ((c = rd(&val)) != 0) {
        if (c == 10) break;
        int32_t v = func_020783a4(p);
        if (v == 0xffff) {
            v = p->base[1];
        }
        sum += w + *(int8_t *)((uint8_t *)func_020783d0(p, v) + 2);
    }

    if (r3 != 0) {
        if (c == 10) {
            *r3 = val;
        } else {
            *r3 = 0;
        }
    }

    if (sum > 0) {
        sum -= w;
    }
    return sum;
}
