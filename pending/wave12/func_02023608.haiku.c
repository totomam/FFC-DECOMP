#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S;

uint32_t func_02023608(S *p) {
    return (uint32_t)p + (p->b + p->c + p->d);
}
