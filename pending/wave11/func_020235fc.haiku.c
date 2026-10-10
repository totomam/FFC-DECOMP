#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint32_t a;
    uint32_t b;
} S;

uint8_t *func_020235fc(S *p) {
    return (uint8_t *)p + (p->a + p->b);
}
