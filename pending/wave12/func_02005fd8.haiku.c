#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t pad[2];
    uint32_t c4;
    uint32_t c8;
    uint32_t cc;
    uint32_t c10;
    uint32_t c14;
} S;

void func_02005fd8(S *p) {
    p->c4 = 0;
    p->c8 = 0;
    p->cc = 0;
    p->c10 = 0;
    p->c14 = 0;
    p->a = 1;
    p->b = 0;
}
