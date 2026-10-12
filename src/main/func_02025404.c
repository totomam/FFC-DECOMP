#include "ffc/types.h"

extern uint8_t *func_02023608(void *a);
extern int func_02092948(void *entry, void *b);

int func_02025404(void *a, void *b)
{
    uint8_t *base;
    uint32_t i;
    uint32_t count;

    base = func_02023608(a);
    count = *(uint32_t *)base;
    i = 0;
    while (i < count) {
        if (func_02092948(base + 4 + i * 16, b) == 0) {
            return (int)i;
        }
        i++;
    }
    return -1;
}
