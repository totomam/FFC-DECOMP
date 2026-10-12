#include "ffc/types.h"

extern void func_02094334(void *s);
extern void func_02093c64(void *s, int16_t n);

typedef struct {
    uint16_t pad;
    int16_t timer;
    volatile uint8_t count;
    uint8_t buf[1];
} S;

void func_02094430(int16_t *a, int32_t b, int32_t c, S *s)
{
    int16_t r4 = a[1];
    int n;
    int i;
    func_02094334(s);
    if (s->buf[0] > 9) {
        return;
    }
    if (r4 > 0x20) {
        r4 = 0x20;
    }
    func_02093c64(s, r4);
    n = s->count;
    if (n < r4) {
        do {
            s->count = s->count + 1;
            s->buf[n] = 0;
            n = s->count;
        } while (n < r4);
    }
    s->timer = s->timer - (int16_t)(n - 1);
    for (i = 0; i < s->count; i++) {
        s->buf[i] += 0x30;
    }
}
