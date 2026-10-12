#include "ffc/types.h"
typedef struct { uint8_t b; } S;
extern void *func_020487a0(void *container, void *position, S s);

void *func_0204e84c(uint8_t *self, uint32_t key) {
    uint32_t *p = *(uint32_t **)(self + 0xa8);
    uint32_t *end = p + *(uint32_t *)(self + 0xac);
    int c;
    for (;;) {
        c = 0;
        if (p != end && *p != key) c = 1;
        if (!c) break;
        p++;
    }
    S s; s.b = 0;
    return func_020487a0(self + 0xa8, p, s);
}
