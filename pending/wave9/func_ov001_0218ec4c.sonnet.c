#include "ffc/types.h"
typedef struct S { uint8_t pad[0xc]; uint32_t f; uint8_t pad2[0x74]; uint32_t *pp; uint32_t pad3; uint32_t g; } S;
void func_ov001_0218ec4c(S *p) {
    if (p->g == 1) {
        *p->pp = 1;
    } else {
        *p->pp = 0;
    }
    p->f = (p->f & ~0xffu) | 2;
}
