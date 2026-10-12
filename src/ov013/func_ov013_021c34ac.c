#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern S data_ov013_021c4ebc;
typedef struct { uint8_t pad0[0xc]; uint32_t f0c; uint8_t pad1[0x70]; S s80; uint32_t pad2[1]; uint32_t *f8c; uint32_t pad3; uint32_t f94; } T;
void func_ov013_021c34ac(T *p) {
    if (p->f94 == 0) {
        *p->f8c = 1;
        p->f0c = (p->f0c & ~0xffu) | 2;
    } else {
        S t = data_ov013_021c4ebc;
        p->s80 = t;
    }
}
