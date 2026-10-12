#include "ffc/types.h"

extern uint8_t data_020a6154[];

typedef struct {
    uint8_t isLong : 1;
    uint8_t len : 7;
    uint8_t pad[3];
    uint32_t llen;
    int8_t *ptr;
} S;
typedef struct {
    uint32_t isLong : 1;
    uint32_t x : 31;
} W;

void func_020288c4(S *s) {
    uint32_t i;
    uint32_t f;
    uint32_t nf;
    for (i = 0; (f = ((W *)s)->isLong ? 1 : 0, i < (f ? s->llen : (uint32_t)s->len)); i++) {
        nf = f ? 0 : 1;
        int8_t c = (nf ? (int8_t *)s + 1 : s->ptr)[i];
        if (c >= 0 && c < 0x80) c = data_020a6154[c];
        (nf ? (int8_t *)s + 1 : s->ptr)[i] = c;
    }
}
