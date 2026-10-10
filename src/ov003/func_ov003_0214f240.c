#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} P;

typedef struct {
    uint8_t pad[0x90];
    P p;
} S;

void func_ov003_0214f240(P *out, S *src) {
    *out = src->p;
}
