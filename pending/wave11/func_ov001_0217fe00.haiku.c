#include "ffc/types.h"

typedef struct {
    uint8_t *buf;
    uint32_t pad;
    uint32_t pos;
} S;

void func_ov001_0217fe00(S *s, uint8_t c) {
    uint32_t i = s->pos;
    s->pos = i + 1;
    s->buf[i] = c;
}
