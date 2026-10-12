#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint16_t h;
} S;

void func_020604ac(S *s, uint32_t unused, uint32_t *A, uint32_t *B, uint32_t n) {
    uint32_t i;
    for (i = 0; i < n; i++) {
        uint16_t mb = (uint16_t)(1u << B[i]);
        uint16_t ma = (uint16_t)(1u << A[i]);
        uint16_t x = s->h;
        uint32_t t1 = (x & ma) ? mb : 0;
        uint32_t t2 = (x & mb) ? ma : 0;
        s->h = (uint16_t)(t2 | (x & ~(ma | mb)) | t1);

        mb = (uint16_t)(1u << (B[i] + 8));
        ma = (uint16_t)(1u << (A[i] + 8));
        x = s->h;
        t1 = (x & ma) ? mb : 0;
        t2 = (x & mb) ? ma : 0;
        s->h = (uint16_t)(t2 | (x & ~(ma | mb)) | t1);
    }
}
