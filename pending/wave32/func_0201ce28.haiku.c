#include "ffc/types.h"

extern void *data_020b8e44;
extern uint32_t func_02018008(void *p);

typedef struct { uint8_t pad[0xc]; uint8_t *bits; } Dst;

void func_0201ce28(uint8_t *a, Dst *b) {
    uint32_t n = func_02018008(data_020b8e44);
    uint32_t i;
    for (i = 1; i < n; i++) {
        uint16_t *tbl = *(uint16_t **)(a + 0x38);
        if (tbl[i] != 0) {
            b->bits[i >> 3] |= (uint8_t)(1 << (i & 7));
        }
    }
}
