#include "ffc/types.h"

void func_0201d1a4(void *self, int idx, uint32_t *out) {
    uint32_t *tab = *(uint32_t **)((char *)self + 0x50);
    *out = tab[idx];
}
