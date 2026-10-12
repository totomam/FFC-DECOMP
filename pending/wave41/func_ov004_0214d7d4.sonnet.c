#include "ffc/types.h"
typedef struct { uint8_t pad0[0x8c]; uint32_t b; uint32_t a; uint8_t pad1[4]; uint32_t *arr[2]; } S;
void func_ov004_0214d7d4(S *p) {
    int i; uint32_t j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < p->a; j++) {
            k=0; if (k < p->b) { if (k < p->b) { do { p->arr[i][j*p->b+k]=0; k++; } while (k < p->b); } }
        }
    }
}
