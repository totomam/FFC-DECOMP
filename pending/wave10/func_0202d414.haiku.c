#include "ffc/types.h"

extern int func_0202d3d0(uint32_t x, void *a);

typedef struct {
    uint32_t a;
    uint32_t b;
} Entry;

uint32_t func_0202d414(void *a, Entry *p) {
    while (p->b != 0xFFFFFFFFu) {
        if (func_0202d3d0(p->a, a) == 0) {
            break;
        }
        p++;
    }
    return p->b;
}
