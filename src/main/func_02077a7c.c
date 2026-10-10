#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint16_t c;
    uint16_t d;
} S;

void func_02077a7c(S *p, uint16_t x) {
    p->a = 0;
    p->b = 0;
    p->c = 0;
    p->d = x;
}
