#include "ffc/types.h"

extern void func_0202c4a0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e);

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Entry;

typedef struct {
    uint32_t a;
    Entry *list;
    uint32_t count;
} Obj;

void func_0202e248(Obj *p)
{
    uint32_t off;
    uint32_t i;
    uint32_t k;
    uint32_t n;
    Entry e;

    n = p->count;
    if (n != 0) {
        k = 63 - p->a;
        off = 16;
        for (i = 0; i < n; i++) {
            e = p->list[i];
            func_0202c4a0(e.w0, off, k - off + 1, n, ((uint8_t *)&e)[4]);
            off++;
        }
    }
}
