#include "ffc/types.h"

extern int func_0202e10c(uint32_t x, void *a);

typedef struct {
    uint32_t a;
    uint32_t b;
} Entry;

uint32_t func_0202e1bc(void *a, Entry *p) {
    while (p->b != 0xFFFFFFFFu) {
        if (func_0202e10c(p->a, a) == 0) {
            break;
        }
        p++;
    }
    return p->b;
}
