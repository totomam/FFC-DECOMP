#include "ffc/types.h"

extern void func_0206a544(void *a, void *b, void *c, uint32_t d, void *e);
extern void func_0202a9ac(void *cursor);

void func_02069694(uint8_t *self, uint32_t a, uint32_t b)
{
    uint32_t out[4];
    void *cur;
    uint32_t d;

    if (a == 0) {
        return;
    }
    cur = *(void **)(self + 0xac);
    if (cur == self + 0xa8) {
        return;
    }
    do {
        if (*(uint32_t *)((uint8_t *)cur + 0xc) == a &&
            *(uint32_t *)((uint8_t *)cur + 0x10) == b) {
            func_0206a544(out, self + 0xa4, cur, d, self + 0xa4);
            return;
        }
        func_0202a9ac(&cur);
    } while (cur != self + 0xa8);
}
