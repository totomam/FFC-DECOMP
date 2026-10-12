#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    uint8_t *base;
    uint8_t *cur;
    uint8_t pad[0x3a - 0xc];
    uint8_t flag;
} S;

int32_t func_020989b4(S *s, int32_t c) {
    if (s->flag == 0) {
        return -1;
    }
    if (s->cur <= s->base) {
        return -1;
    }
    s->cur = s->cur - 1;
    if (c != -1) {
        *s->cur = (uint8_t)c;
    }
    if (c == -1) {
        c = 0;
    }
    return c;
}
