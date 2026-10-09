#include "ffc/types.h"
extern void *func_0200958c(void *object);
typedef struct { uint8_t *base; int32_t count; } S;
void func_0203b5fc(S *o, int32_t n) {
    int32_t c = o->count; uint8_t *p = o->base + c*12; o->count -= n;
    if (n == 0) return;
    do { p -= 12; func_0200958c(p); } while (--n);
}
