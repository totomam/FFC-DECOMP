#include "ffc/types.h"
typedef struct {
    uint32_t pad;
    uint32_t mask;
    uint8_t flag[0x44];
    int32_t v[8][2];
} S;
void func_ov002_021aa29c(S *s, int32_t n)
{
    int32_t i;
    s->mask &= ~(1u << n);
    s->flag[n] = 0;
    for (i = 0; i < 2; i++) {
        s->v[n][i] = i;
    }
}
