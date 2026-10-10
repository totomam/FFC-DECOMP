#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x206];
    uint16_t a;
    uint16_t b;
    uint16_t c;
    uint32_t flag;
} S;

uint32_t func_0200785c(S *p, uint16_t a, uint16_t b, uint16_t c) {
    p->a = a;
    p->b = b;
    p->c = c;
    p->flag = 1;
}
