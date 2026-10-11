#include "ffc/types.h"
typedef struct S { uint8_t pad[0xc]; uint32_t f; uint8_t pad1[0x7c]; uint32_t *pp; uint8_t pad2[0x8]; uint32_t g; } S;
void func_ov013_021c35d0(S *p) {
    if (p->g == 0) {
        *p->pp = 0;
    } else {
        *p->pp = 1;
    }
    p->f = (p->f & ~0xffu) | 2;
}
