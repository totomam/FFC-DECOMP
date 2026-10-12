#include "ffc/types.h"

extern int func_0209cd1c(void *ctx, uint32_t val, uint32_t *out);

typedef struct {
    uint32_t n;
    uint32_t pad[2];
    uint8_t *e;
} S;

int func_0209c980(void *ctx, S *s)
{
    uint32_t tmp;
    uint32_t i;
    uint8_t *p;

    if (s->n == 0) {
        return 0;
    }
    p = s->e;
    i = 0;
    do {
        uint32_t v = ((uint32_t)p[3] << 24) | (p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16));
        if (func_0209cd1c(ctx, v, &tmp) != 0) {
            return 1;
        }
        p += 4;
        i++;
    } while (i < s->n);
    return 0;
}
