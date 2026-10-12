#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02060a54(void *object, uint32_t first, uint32_t second);

void *func_02060b80(void *self, uint32_t first) {
    uint32_t i = 0;
    uint32_t *arr = (uint32_t *)self;
    do {
        void *p = func_0205681c(0x1c);
        if (p != 0) {
            p = func_02060a54(p, first, i);
        }
        arr[i + 1] = (uint32_t)p;
        i++;
    } while (i < 4);
    return self;
}
