#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x24];
    int32_t f24;
    int32_t f28;
} Ctx;

extern Ctx *func_0204dc5c(void *a, uint32_t *b, int32_t c, int32_t *d);
extern int32_t func_0204dcc0(void *a, Ctx *p, int32_t c, int32_t d);
extern int32_t func_0204ad6c(void);

int32_t func_0204bfd4(void *a, uint32_t *b, int32_t c, int32_t *d, int32_t mode)
{
    int32_t total = 0;
    Ctx *p;
    int32_t n;
    int32_t m;
    p = func_0204dc5c(a, b, c, d);
    if (p == 0) {
        return total;
    }
    p->f24 = 0;
    for (;;) {
        if (*b != 0) {
            return 0;
        }
        p->f28 = 0;
        if (func_0204dcc0(a, p, c, total) < 0) {
            return 0;
        }
        n = p->f28;
        m = p->f24;
        if (n == 0) {
            break;
        }
        if (m == 0) {
            return 0;
        }
        total += n;
        switch (mode) {
        case 0:
        case 1:
            *d += n;
            break;
        case 2:
            *d += func_0204ad6c();
            break;
        }
    }
    return 1;
}
