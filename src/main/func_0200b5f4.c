#include "ffc/types.h"

extern void *func_020059cc(void *object);

typedef struct {
    uint8_t *base;
    uint32_t count;
} Pool;

void func_0200b5f4(Pool *s, uint32_t n) {
    uint8_t *p = s->base + (s->count << 4);
    s->count = s->count - n;
    while (n != 0) {
        p -= 16;
        func_020059cc(p + 4);
        n--;
    }
}
