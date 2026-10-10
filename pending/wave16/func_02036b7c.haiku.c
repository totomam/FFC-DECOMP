#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t f : 5;
    uint32_t g : 27;
} S;

void func_02036b7c(S *s, uint32_t n) {
    s->f = (1u << n) | s->f;
}
