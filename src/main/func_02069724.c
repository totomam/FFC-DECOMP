#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} P;

typedef struct {
    uint8_t pad[0x9c];
    P p;
} S;

void func_02069724(P *out, S *src) {
    *out = src->p;
}
