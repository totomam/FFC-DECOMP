#include "ffc/types.h"

extern const char data_020ab164[];
extern void func_02091a24(const char *msg);
extern uint32_t func_0208f42c(void);
extern uint32_t func_02093b94(const uint16_t *first, const uint16_t *second, uint32_t length);

typedef struct {
    uint32_t lng : 1;
    uint32_t rest : 31;
    uint32_t len;
    const uint16_t *ptr;
} LongStr;

int func_0200cf10(const void *s, uint32_t a, uint32_t b, const uint16_t *second, uint32_t c)
{
    const uint8_t *bp = (const uint8_t *)s;
    const uint16_t *data;
    uint32_t len;
    uint32_t x, n, y, ret;

    if (!((const LongStr *)s)->lng) {
        data = (const uint16_t *)(bp + 2);
        len = ((uint32_t)bp[0] << 24) >> 25;
    } else {
        const LongStr *l = (const LongStr *)s;
        data = l->ptr;
        len = l->len;
    }

    if (a > len) {
        func_02091a24(data_020ab164);
        func_0208f42c();
    }

    n = len - a;
    x = *((b < n) ? &b : &n);
    y = *((c < x) ? &c : &x);
    ret = func_02093b94(data + a, second, y);
    if (ret != 0) {
        return (int)ret;
    }
    if (x < c) {
        return -1;
    }
    if (x == c) {
        return 0;
    }
    return 1;
}
