#include "ffc/types.h"

typedef struct { uint8_t pad[0x80]; uint32_t f; } S;

void func_ov002_021ada00(S *p, uint32_t a, uint32_t b) {
    p->f = 0;
    if (a) {
        p->f |= 1;
    }
    if (b) {
        p->f |= 2;
    }
}
