#include "ffc/types.h"

extern void func_ov001_0217b7a8(void *p);

void func_ov001_0217b7f4(uint8_t **self, uint8_t *node)
{
    uint8_t *prev = 0;
    uint8_t *base = *self;
    uint8_t *cur = *(uint8_t **)(base + 0x5c4);

    while (cur != 0) {
        if (cur == node) {
            if (prev == 0) {
                *(uint8_t **)(base + 0x5c4) = *(uint8_t **)(cur + 0x20);
            } else {
                *(uint8_t **)(prev + 0x20) = *(uint8_t **)(node + 0x20);
            }
            func_ov001_0217b7a8(self);
            return;
        }
        prev = cur;
        cur = *(uint8_t **)(cur + 0x20);
    }
}
