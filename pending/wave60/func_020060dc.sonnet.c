#include "ffc/types.h"
typedef struct { int8_t *d; int32_t n; int32_t pad; uint8_t f; } B;
void func_020060dc(B *b, int32_t i) {
    int32_t m;
    if (b->f == 0) return;
    if (i >= b->n) return;
    m = ~(1 << (i % 8));
    b->d[i / 8] = b->d[i / 8] & m;
}
