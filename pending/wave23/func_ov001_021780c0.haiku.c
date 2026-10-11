#include "ffc/types.h"

typedef struct {
    int32_t pad[2];
    int32_t *a;
    int32_t *b;
} S;

uint32_t func_ov001_021780c0(int32_t unused, S *s, int32_t x)
{
    if (s->a != 0 && s->a[0] > x) {
        s->a[0]--;
    } else if (s->b != 0 && s->b[0] > x) {
        s->b[0]--;
    }
    return 1;
}
