#include "ffc/types.h"
extern void *func_020487a0(void *container, void *position, uint32_t flag);

void *func_0204e84c(uint8_t *self, uint32_t key) {
    uint8_t *list = self + 0xa8;
    uint32_t *p = *(uint32_t **)list;
    uint32_t *end = p + *(uint32_t *)(self + 0xac);
    int c = (p != end) && (*p != key);
    while (c) {
        p++;
        c = (p != end) && (*p != key);
    }
    volatile uint8_t f = 0;
    return func_020487a0(list, p, f);
}
