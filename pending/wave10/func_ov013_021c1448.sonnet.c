#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern S data_ov013_021c4b44;
typedef struct { uint8_t pad0[0xc]; uint32_t f0c; uint8_t pad1[0xa8]; S s; uint32_t pad2[1]; uint32_t *f_c4; uint32_t pad3; uint32_t f_cc; } T;
void func_ov013_021c1448(T *p) {
    if (p->f_cc == 0) {
        *p->f_c4 = 1;
        p->f0c = (p->f0c & ~0xffu) | 2;
    } else {
S t = data_ov013_021c4b44; p->s = t;
    }
}
