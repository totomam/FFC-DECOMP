#include "ffc/types.h"

extern void func_0206a544(void *a, void *b, void *c);
extern void func_0202a9ac(void *cursor);

typedef struct { uint32_t out[4]; uint8_t *cur; } L;

void func_02069694(uint8_t *self, uint32_t a, uint32_t b)
{
    L l;

    if (a == 0) {
        return;
    }
    l.cur = *(uint8_t **)(self + 0xac);
    if (l.cur == self + 0xa8) {
        return;
    }
    do {
        uint8_t *n = *(uint8_t *volatile *)&l.cur;
        if (*(uint32_t *)(n + 0xc) == a &&
            b == *(uint32_t *)(n + 0x10)) {
            self += 0xa4;
            func_0206a544(l.out, self, l.cur);
            return;
        }
        func_0202a9ac(&l.cur);
    } while (l.cur != self + 0xa8);
}
