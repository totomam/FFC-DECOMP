#include "ffc/types.h"
typedef struct { uint32_t pad; uint32_t mask; uint8_t b[0x44]; uint32_t w[1]; } S;
void func_ov002_021aa29c(S *p, int i) {
    int j;
    p->mask &= ~(1u << i);
    p->b[i] = 0;
    for (j = 0; j < 2; j++) {
        *(uint32_t*)((uint8_t*)p + i*8 + 0x4c + j*4) = 0;
    }
}
