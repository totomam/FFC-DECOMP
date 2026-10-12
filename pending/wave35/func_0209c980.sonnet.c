#include "ffc/types.h"

extern int func_0209cd1c(void *ctx, uint32_t val, uint32_t *out);

typedef struct {
    uint32_t n;
    uint32_t pad[2];
    uint32_t *e;
} S;

int func_0209c980(void *ctx, S *s)
{
    uint32_t tmp[2];
    uint8_t *p = (uint8_t *)s->e;
    uint32_t i;

    for (i = 0; i < s->n; i++) {
        uint32_t v = ((uint32_t)p[3] << 24) | (p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16));
        p += 4;
        if (func_0209cd1c(ctx, v, tmp)) {
            return 1;
        }
    }
    return 0;
}
