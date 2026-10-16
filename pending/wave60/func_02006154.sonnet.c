#include "ffc/types.h"
typedef struct { int8_t *data; int32_t a; int32_t n; uint8_t f; } S;
void func_02006154(S *s, int8_t v) {
    int32_t i;
    int8_t t;
    if (s->f == 0) return;
    t = v;
    t = -t;
    for (i = 0; i < s->n; i++) {
        s->data[i] = t;
    }
}
