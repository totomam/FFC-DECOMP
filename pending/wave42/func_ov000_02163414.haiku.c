#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

uint32_t func_ov000_02163414(Pair *src)
{
    uint8_t *p;
    uint8_t *q;
    int32_t n;
    int32_t k;
    Pair *d;
    Pair *s;

    if (*(int32_t *)(func_ov000_02163350() + 0x50) == 0x20) {
        return 0;
    }

    n = *(int32_t *)(func_ov000_02163350() + 0x50);
    if (n > 0) {
        do {
            p = func_ov000_02163350();
            d = (Pair *)(p + 0x28 * n + 0x54);
            q = func_ov000_02163350();
            s = (Pair *)(q + 0x28 * (n - 1) + 0x54);
            k = 5;
            do {
                *d++ = *s++;
                k--;
            } while (k != 0);
            n--;
        } while (n > 0);
    }

    p = func_ov000_02163350();
    d = (Pair *)(p + 0x54);
    k = 5;
    do {
        *d++ = *src++;
        k--;
    } while (k != 0);

    p = func_ov000_02163350();
    *(int32_t *)(p + 0x50) = *(int32_t *)(p + 0x50) + 1;
    return 1;
}
