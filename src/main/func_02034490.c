#include "ffc/types.h"

extern int32_t func_0208f68c(int32_t value);
extern int32_t func_0208f694(int32_t value);

typedef struct {
    int32_t pad0[11];
    int8_t *buf;
    uint32_t val;
    uint8_t flag;
    uint8_t pad1[3];
    int32_t cnt;
} S;

void func_02034490(S *s) {
    int32_t sum = 0;
    uint32_t i;
    int32_t r;
    int8_t *buf;

    if (s->cnt == 0) {
        buf = s->buf;
        i = 0;
        do {
            r = func_0208f68c(buf[i]);
            if ((uint32_t)r > 11) {
                sum += r;
            }
            i++;
        } while (i < 1024);
    }
    s->val = s->val - (s->val >> 3);
    r = func_0208f694(sum);
    if (r >= 10000) {
        s->val += r;
    }
    if (s->val >= 10000) {
        s->flag = 1;
    } else {
        s->flag = 0;
    }
    if (s->flag) {
        s->val = s->val - 10000;
    }
}
