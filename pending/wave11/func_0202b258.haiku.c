#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x38];
    uint32_t f38;
    uint32_t f3c;
    uint8_t pad1[0x48 - 0x40];
    uint8_t f48;
} S;

void func_0202b258(S *p, uint32_t a, uint32_t b) {
    p->f38 = a;
    p->f3c = b;
    p->f48 = 1;
}
