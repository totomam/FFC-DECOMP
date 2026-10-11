#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t *arr;
    uint32_t f8;
    int32_t count;
} GlobalS;

extern GlobalS data_ov006_021ba1c8;

int func_ov006_0219ce9c(int idx)
{
    GlobalS *g;
    uint32_t *p;
    uint16_t i;
    int32_t count;
    uint32_t mask;

    g = &data_ov006_021ba1c8;
    i = 0;
    count = g->count;
    if (count > 0) {
        p = g->arr + (idx - 1);
        mask = p[120];
        do {
            if (!(mask & (1u << i))) {
                return 0;
            }
            i = i + 1;
        } while ((int32_t)i < count);
    }
    return 1;
}
