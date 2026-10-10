#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x58];
    uint32_t f58;
    uint32_t f5c;
    uint8_t f60;
} S;

void func_0202def4(S *s, uint32_t a, uint32_t b, uint8_t c) {
    s->f58 = a;
    s->f5c = b;
    s->f60 = c;
}
