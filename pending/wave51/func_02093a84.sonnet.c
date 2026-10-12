#include "ffc/types.h"

extern int64_t func_02093820(uint32_t c, uint32_t lim, void (*fn)(void), int32_t *pa, int32_t *x, int32_t *y, int32_t *w);
extern void func_0209270c(void);
extern uint32_t data_02144c00;

typedef struct {
    int32_t pa;
    int32_t z;
    int32_t w;
    int32_t y;
    int32_t x;
} Loc;

int64_t func_02093a84(int32_t a, int32_t *b, uint32_t c)
{
    Loc L;
    int64_t r;

    L.z = 0;
    L.pa = a;
    r = func_02093820(c, 0x7fffffff, func_0209270c, &L.pa, &L.x, &L.y, &L.w);
    if (b != 0) {
        *b = a + L.x;
    }
    if (L.w != 0 || (L.y == 0 && (uint64_t)r > 0x7fffffffffffffffULL) || (L.y != 0 && (uint64_t)r > 0x8000000000000000ULL)) {
        r = (L.y != 0) ? (int64_t)0x8000000000000000ULL : (int64_t)0x7fffffffffffffffULL;
        data_02144c00 = 0x22;
        return r;
    }
    if (L.y != 0) {
        r = -r;
    }
    return r;
}
