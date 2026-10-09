#include "ffc/types.h"
extern void *func_0205d620(void *object);
typedef struct { uint8_t *base; int32_t count; } S;
void func_ov012_021d1810(S *o, int32_t n) {
    int32_t c = o->count; uint8_t *p = o->base + c*56; o->count -= n;
    if (n == 0) return;
    do { p -= 56; func_0205d620(p); } while (--n);
}
