#include "ffc/types.h"
extern void *func_020059cc(void *object);
typedef struct { uint8_t *base; int32_t count; } S;
void func_02009888(S *o, int32_t n) {
    int32_t c = o->count; uint8_t *p = o->base + c*12; o->count -= n;
    if (n == 0) return;
    do { p -= 12; func_020059cc(p); } while (--n);
}
