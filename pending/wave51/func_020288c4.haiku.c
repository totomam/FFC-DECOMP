#include "ffc/types.h"

extern uint8_t data_020a6154[];

void func_020288c4(uint8_t *s) {
    uint32_t i;
    for (i = 0; i < ((*(uint32_t *)s & 1) ? *(uint32_t *)(s + 4) : ((s[0] >> 1) & 0x7f)); i++) {
        int nf = (*(uint32_t *)s & 1) == 0;
        uint8_t *src = nf ? s + 1 : *(uint8_t **)(s + 8);
        int8_t c = (int8_t)src[i];
        if (c >= 0 && c < 0x80) {
            c = (int8_t)data_020a6154[c];
        }
        uint8_t *dst = nf ? s + 1 : *(uint8_t **)(s + 8);
        dst[i] = (uint8_t)c;
    }
}
