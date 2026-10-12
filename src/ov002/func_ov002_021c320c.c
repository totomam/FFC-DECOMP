#include "ffc/types.h"

extern void func_ov002_021c2904(void *p);

typedef struct {
    uint8_t *base;
    uint32_t count;
} Pool;

void func_ov002_021c320c(Pool *s, uint32_t n) {
    uint8_t *p = s->base + (s->count << 5);
    s->count = s->count - n;
    while (n != 0) {
        p -= 32;
        func_ov002_021c2904(p);
        n--;
    }
}
