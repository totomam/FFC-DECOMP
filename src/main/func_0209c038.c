#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Ent;

Ent *func_0209c038(Ent *tab, int n, uint32_t key) {
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi) {
        int mid = (lo + hi) >> 1;
        Ent *e = &tab[mid];
        if (key < e->a) {
            hi = mid - 1;
        } else {
            uint32_t len = e->b & ~1u;
            if (key <= e->a + len) {
                return e;
            }
            lo = mid + 1;
        }
    }
    return 0;
}
